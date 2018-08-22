#ifndef HTML_VIEWER_H
#define HTML_VIEWER_H

#include <QWidget>
#include "QStandardItemModel"

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
public slots:
    void setHeader(QStringList);
    void addRow(QStringList);
};

#endif // HTML_VIEWER_H
