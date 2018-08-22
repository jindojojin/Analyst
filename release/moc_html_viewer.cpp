/****************************************************************************
** Meta object code from reading C++ file 'html_viewer.h'
**
** Created: Thu Aug 23 00:51:36 2018
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../html_viewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'html_viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HTML_VIEWER[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      36,   12,   12,   12, 0x0a,
      56,   12,   12,   12, 0x0a,
      77,   73,   12,   12, 0x08,
     125,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HTML_VIEWER[] = {
    "HTML_VIEWER\0\0setHeader(QStringList)\0"
    "addRow(QStringList)\0setInfo(QString)\0"
    "pos\0on_tableView_customContextMenuRequested(QPoint)\0"
    "setVisibleForColumn(int)\0"
};

const QMetaObject HTML_VIEWER::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HTML_VIEWER,
      qt_meta_data_HTML_VIEWER, 0 }
};

const QMetaObject *HTML_VIEWER::metaObject() const
{
    return &staticMetaObject;
}

void *HTML_VIEWER::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HTML_VIEWER))
	return static_cast<void*>(const_cast< HTML_VIEWER*>(this));
    return QWidget::qt_metacast(_clname);
}

int HTML_VIEWER::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setHeader((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: addRow((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: setInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: on_tableView_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: setVisibleForColumn((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
