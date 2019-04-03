/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Apr 3 12:12:34 2019
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      33,   11,   11,   11, 0x05,
      57,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   81,   11,   11, 0x0a,
     120,   11,   11,   11, 0x0a,
     150,   11,   11,   11, 0x08,
     196,  192,   11,   11, 0x08,
     250,  244,   11,   11, 0x08,
     290,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     329,   11,   11,   11, 0x08,
     340,   11,   11,   11, 0x08,
     360,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0view_detail(QString)\0"
    "changeNameData(QString)\0read_info_file(QString)\0"
    ",\0add_infor_to_screen(QString,QString)\0"
    "add_row_to_table(QStringList)\0"
    "on_actionM_t_p_tin_nh_t_k_c50_triggered()\0"
    "pos\0on_tableView_customContextMenuRequested(QPoint)\0"
    "index\0on_tableView_doubleClicked(QModelIndex)\0"
    "viewWithBrowser()\0viewWithHtmlViewer()\0"
    "editNote()\0show_error(QString)\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
	return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: view_detail((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: changeNameData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: read_info_file((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: add_infor_to_screen((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: add_row_to_table((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: on_actionM_t_p_tin_nh_t_k_c50_triggered(); break;
        case 6: on_tableView_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 7: on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: viewWithBrowser(); break;
        case 9: viewWithHtmlViewer(); break;
        case 10: editNote(); break;
        case 11: show_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: on_pushButton_clicked(); break;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::view_detail(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::changeNameData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::read_info_file(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
