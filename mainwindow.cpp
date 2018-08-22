#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fileanalyst.h"
#include "QFileDialog"
#include "QDebug"
#include "QMessageBox"
#include "QDesktopServices"
#include "QUrl"

QString MAIN_FOLDER;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->init_analyst();
    this->setupTable();
    MAIN_FOLDER= "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_analyst(){
    FileAnalyst *analyst = new FileAnalyst();
    connect(this,SIGNAL(view_detail(QString)),analyst,SLOT(read_file_html(QString)));
    connect(this,SIGNAL(read_info_file(QString)),analyst,SLOT(read_file_log(QString)));
    connect(analyst,SIGNAL(add_infor_to_mainwindow(QString,QString)),this,SLOT(add_infor_to_screen(QString,QString)));
    connect(analyst,SIGNAL(add_row_to_mainwindow(QStringList)),this,SLOT(add_row_to_table(QStringList)));
    connect(analyst,SIGNAL(send_error(QString)),this,SLOT(show_error(QString)));
}

void MainWindow::setupTable(){
    this->model = new QStandardItemModel(0,4,this);
    model->setHorizontalHeaderItem(0,new QStandardItem(QString::fromUtf8("Tên phần mềm")));
    model->setHorizontalHeaderItem(1,new QStandardItem(QString::fromUtf8("Tệp tin kết quả")));
    model->setHorizontalHeaderItem(3,new QStandardItem(QString::fromUtf8("Ghi chú")));
    model->setHorizontalHeaderItem(2,new QStandardItem(QString::fromUtf8("Thời gian")));
    this->ui->tableView->setModel(model);
    this->ui->tableView->setAlternatingRowColors(true);
    this->ui->tableView->setColumnWidth(0,330);
    this->ui->tableView->setColumnWidth(2,330);
    this->ui->tableView->setColumnWidth(1,360);
    this->ui->tableView->show();
}

void MainWindow::add_row_to_table(QStringList list_data){
    QList<QStandardItem *> a;
    foreach(QString b, list_data){
        a.append(new QStandardItem(b));
    }
    this->model->appendRow(a);
}

void MainWindow::add_infor_to_screen(QString name, QString note){
    this->ui->name->setText(name);
    this->ui->note->setText(note);
}


void MainWindow::on_actionM_t_p_tin_nh_t_k_c50_triggered()
{
    QString file_path = QFileDialog::getOpenFileName(this,QString::fromUtf8("Chọn tệp tin"),"/home","*.c50");
    QFileInfo file(file_path);
    this->model->clear();
    this->setupTable();
    MAIN_FOLDER = file.absoluteDir().absolutePath();
    emit read_info_file(file_path);
    qDebug() << MAIN_FOLDER;
}

void MainWindow::on_tableView_customContextMenuRequested(const QPoint &pos)
{
    qDebug()<<"submenu created!";
    if(!this->ui->tableView->indexAt(pos).isValid()) return;
    this->current_row_selected = this->ui->tableView->indexAt(pos).row();
    this->create_sub_menu(pos);
}

void MainWindow::create_sub_menu(QPoint pos){
    qDebug()<<"submenu created!";
        QMenu *menu = new QMenu(this->ui->tableView);
        QAction *viewWithBrower = new QAction(QString::fromUtf8("Xem bằng trình duyệt"),menu);
        menu->addAction(viewWithBrower);

        QAction *viewWithHtmlViewer = new QAction(QString::fromUtf8("Xem chi tiết dưới dạng bảng"),menu);
        menu->addAction(viewWithHtmlViewer);

//        QAction *editNote = new QAction(QString::fromUtf8("Chỉnh sửa ghi chú"),menu);
//        menu->addAction(editNote);
//        connect(editNote,SIGNAL(triggered()),this,SLOT(editNote()));
//        QAction *Runx64andSave = new QAction(QString::fromUtf8("Chỉnh sửa nhãn dán"),menu);
//        menu->addAction(Runx64andSave);
        QPoint newPoint = this->ui->tableView->mapToGlobal(pos);
        menu->mapToParent(newPoint);
        menu->move(newPoint);
        menu->show();
        connect(viewWithBrower,SIGNAL(triggered()),this,SLOT(viewWithBrowser()));
        connect(viewWithHtmlViewer,SIGNAL(triggered()),this,SLOT(viewWithHtmlViewer()));

}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    this->current_row_selected = index.row();
    this->viewWithHtmlViewer();
}

void MainWindow::viewWithBrowser(){
    QString fileName = this->ui->tableView->model()->data(this->ui->tableView->model()->index(this->current_row_selected,1)).toString();
    if(QFile(MAIN_FOLDER+"/"+fileName).isReadable()){

    }
    QDesktopServices::openUrl(QUrl(MAIN_FOLDER+"/"+fileName));
}

void MainWindow::viewWithHtmlViewer(){
    QString fileName = this->ui->tableView->model()->data(this->ui->tableView->model()->index(this->current_row_selected,1)).toString();
    emit view_detail(MAIN_FOLDER+"/"+fileName);
}

void MainWindow::editNote(){

}

void MainWindow::show_error(QString error){
    QMessageBox::warning(this,QString::fromUtf8("Lỗi"),error);
}

void MainWindow::on_pushButton_clicked()
{
    this->on_actionM_t_p_tin_nh_t_k_c50_triggered();
}
