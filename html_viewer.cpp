#include "html_viewer.h"
#include "ui_html_viewer.h"
#include "QMenu"
#include "QSignalMapper"
#include "QDebug"
#include "QString"
HTML_VIEWER::HTML_VIEWER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HTML_VIEWER)
{
    ui->setupUi(this);
    this->menu = new QMenu();

}

HTML_VIEWER::~HTML_VIEWER()
{
    delete ui;
}

void HTML_VIEWER::addRow(QStringList list_data){
    QList<QStandardItem *> a;
    foreach(QString b, list_data){
        a.append(new QStandardItem(b));
    }
    this->model->appendRow(a);
}

void HTML_VIEWER::setHeader(QStringList list){
    this->model = new QStandardItemModel(0,list.count(),this);
    for(int i =0 ; i< list.count(); i++){
        model->setHorizontalHeaderItem(i,new QStandardItem(list[i]));
        this->visibleColumn[i]=1;
        QAction *action = new QAction(list.at(i),menu);
        action->setIcon(QIcon("checkIcon.png"));
        this->menu->addAction(action);
        QSignalMapper *map = new QSignalMapper();
        map->setMapping(action,i);
        connect(action,SIGNAL(triggered()),map,SLOT(map()));
        connect(map,SIGNAL(mapped(int)),this,SLOT(setVisibleForColumn(int)));
    }
    this->ui->tableView->setModel(this->model);
    this->ui->tableView->setAlternatingRowColors(true);
    this->ui->tableView->show();
}

void HTML_VIEWER::on_tableView_customContextMenuRequested(const QPoint &pos)
{
    this->create_custom_view_menu(pos);
}

void HTML_VIEWER::setInfo(QString info){
    qDebug()<<"Can hien thi tren html viewer "<< info;
    this->ui->label_infor->setText(info);
}

void HTML_VIEWER::create_custom_view_menu(QPoint pos){
    QPoint newPoint = this->ui->tableView->mapToGlobal(pos);
    this->menu->mapToParent(newPoint);
    this->menu->move(newPoint);
    this->menu->show();
}

void HTML_VIEWER::setVisibleForColumn(int columnNumber){
    this->ui->tableView->setColumnHidden(columnNumber,this->visibleColumn[columnNumber]);
    this->visibleColumn[columnNumber]=(this->visibleColumn[columnNumber]==1) ?0:1;
    if(this->visibleColumn[columnNumber]) this->menu->actions().at(columnNumber)->setIcon(QIcon("checkIcon.png"));
    else this->menu->actions().at(columnNumber)->setIcon(QIcon());
}
