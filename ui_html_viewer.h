/********************************************************************************
** Form generated from reading ui file 'html_viewer.ui'
**
** Created: Wed Aug 22 20:58:25 2018
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
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HTML_VIEWER
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;

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

    gridLayout->addWidget(tableView, 0, 0, 1, 1);


    retranslateUi(HTML_VIEWER);

    QMetaObject::connectSlotsByName(HTML_VIEWER);
    } // setupUi

    void retranslateUi(QWidget *HTML_VIEWER)
    {
    HTML_VIEWER->setWindowTitle(QApplication::translate("HTML_VIEWER", "HTML_Viewer", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(HTML_VIEWER);
    } // retranslateUi

};

namespace Ui {
    class HTML_VIEWER: public Ui_HTML_VIEWER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTML_VIEWER_H
