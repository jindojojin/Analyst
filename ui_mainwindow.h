/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Aug 22 21:02:29 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionM_t_p_tin_nh_t_k_c50;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *name;
    QTableView *tableView;
    QLabel *note;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menuT_p_tin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(972, 545);
    actionM_t_p_tin_nh_t_k_c50 = new QAction(MainWindow);
    actionM_t_p_tin_nh_t_k_c50->setObjectName(QString::fromUtf8("actionM_t_p_tin_nh_t_k_c50"));
    centralWidget = new QWidget(MainWindow);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    name = new QLabel(centralWidget);
    name->setObjectName(QString::fromUtf8("name"));
    name->setEnabled(true);
    name->setMinimumSize(QSize(93, 0));
    QFont font;
    font.setPointSize(11);
    name->setFont(font);

    gridLayout->addWidget(name, 0, 0, 1, 1);

    tableView = new QTableView(centralWidget);
    tableView->setObjectName(QString::fromUtf8("tableView"));
    QFont font1;
    font1.setPointSize(10);
    tableView->setFont(font1);
    tableView->setContextMenuPolicy(Qt::CustomContextMenu);
    tableView->setAutoScrollMargin(10);
    tableView->setSortingEnabled(true);

    gridLayout->addWidget(tableView, 4, 0, 1, 3);

    note = new QLabel(centralWidget);
    note->setObjectName(QString::fromUtf8("note"));
    note->setMinimumSize(QSize(0, 69));
    note->setFont(font);
    note->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

    gridLayout->addWidget(note, 1, 0, 1, 1);

    pushButton = new QPushButton(centralWidget);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setFont(font1);

    gridLayout->addWidget(pushButton, 0, 2, 1, 1);

    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

    MainWindow->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(MainWindow);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 972, 25));
    menuT_p_tin = new QMenu(menuBar);
    menuT_p_tin->setObjectName(QString::fromUtf8("menuT_p_tin"));
    MainWindow->setMenuBar(menuBar);
    mainToolBar = new QToolBar(MainWindow);
    mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
    MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
    statusBar = new QStatusBar(MainWindow);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    MainWindow->setStatusBar(statusBar);

    menuBar->addAction(menuT_p_tin->menuAction());
    menuT_p_tin->addAction(actionM_t_p_tin_nh_t_k_c50);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ANALYST_c50", 0, QApplication::UnicodeUTF8));
    actionM_t_p_tin_nh_t_k_c50->setText(QApplication::translate("MainWindow", "M\341\273\237 t\341\273\207p tin nh\341\272\255t k\303\275 .c50", 0, QApplication::UnicodeUTF8));
    name->setText(QApplication::translate("MainWindow", "Ch\341\273\215n t\341\272\255p tin l\306\260u tr\341\273\257 k\341\272\277t qu\341\272\243 info.c50 \304\221\341\273\203 m\341\273\237 l\341\272\241i c\303\241c d\341\273\257 li\341\273\207u \304\221\303\243 thu th\341\272\255p", 0, QApplication::UnicodeUTF8));
    note->setText(QString());
    pushButton->setText(QApplication::translate("MainWindow", "Ch\341\273\215n t\341\272\255p tin .c50", 0, QApplication::UnicodeUTF8));
    menuT_p_tin->setTitle(QApplication::translate("MainWindow", "T\341\273\207p tin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
