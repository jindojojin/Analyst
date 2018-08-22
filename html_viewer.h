#ifndef HTML_VIEWER_H
#define HTML_VIEWER_H

#include <QWidget>
#include "QStandardItemModel"
#include "QMenu"

namespace Ui {
    class HTML_VIEWER;
}

class HTML_VIEWER : public QWidget
{
    Q_OBJECT

public:
    explicit HTML_VIEWER(QWidget *parent = 0);
    ~HTML_VIEWER();

private:
    Ui::HTML_VIEWER *ui;
    QStandardItemModel *model;
    void create_custom_view_menu(QPoint);
    QMenu *menu;
    void addAction(QString);
    int visibleColumn[100];
public slots:
    void setHeader(QStringList);
    void addRow(QStringList);
    void setInfo(QString);
private slots:
    void on_tableView_customContextMenuRequested(const QPoint &pos);
    void setVisibleForColumn(int);
};


#endif // HTML_VIEWER_H
