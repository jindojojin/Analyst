#include "html_viewer.h"
#include "ui_html_viewer.h"

HTML_VIEWER::HTML_VIEWER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HTML_VIEWER)
{
    ui->setupUi(this);
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
        model->setHorizontalHeaderItem(i,new QStandardItem(list.at(i)));
    }
    this->ui->tableView->setModel(model);
    this->ui->tableView->setAlternatingRowColors(true);
    this->ui->tableView->show();
}
