/********************************************************************************
** Form generated from reading ui file 'html_viewer.ui'
**
** Created: Thu Apr 4 07:50:08 2019
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_HTML_VIEWER_H
#define UI_HTML_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HTML_VIEWER
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QLabel *label_infor;

    void setupUi(QWidget *HTML_VIEWER)
    {
    if (HTML_VIEWER->objectName().isEmpty())
        HTML_VIEWER->setObjectName(QString::fromUtf8("HTML_VIEWER"));
    HTML_VIEWER->resize(640, 480);
    gridLayout = new QGridLayout(HTML_VIEWER);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tableView = new QTableView(HTML_VIEWER);
    tableView->setObjectName(QString::fromUtf8("tableView"));
    tableView->setContextMenuPolicy(Qt::CustomContextMenu);
    tableView->setSortingEnabled(true);

    gridLayout->addWidget(tableView, 1, 0, 1, 1);

    label_infor = new QLabel(HTML_VIEWER);
    label_infor->setObjectName(QString::fromUtf8("label_infor"));
    QFont font;
    font.setPointSize(12);
    label_infor->setFont(font);

    gridLayout->addWidget(label_infor, 0, 0, 1, 1);


    retranslateUi(HTML_VIEWER);

    QMetaObject::connectSlotsByName(HTML_VIEWER);
    } // setupUi

    void retranslateUi(QWidget *HTML_VIEWER)
    {
    HTML_VIEWER->setWindowTitle(QApplication::translate("HTML_VIEWER", "Xem k\341\272\277t qu\341\272\243", 0, QApplication::UnicodeUTF8));
    label_infor->setText(QString());
    Q_UNUSED(HTML_VIEWER);
    } // retranslateUi

};

namespace Ui {
    class HTML_VIEWER: public Ui_HTML_VIEWER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTML_VIEWER_H
