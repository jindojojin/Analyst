/****************************************************************************
** Meta object code from reading C++ file 'datainfomation.h'
**
** Created: Wed Aug 22 21:02:54 2018
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../datainfomation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datainfomation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataInfomation[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets

       0        // eod
};

static const char qt_meta_stringdata_DataInfomation[] = {
    "DataInfomation\0"
};

const QMetaObject DataInfomation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataInfomation,
      qt_meta_data_DataInfomation, 0 }
};

const QMetaObject *DataInfomation::metaObject() const
{
    return &staticMetaObject;
}

void *DataInfomation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataInfomation))
	return static_cast<void*>(const_cast< DataInfomation*>(this));
    return QObject::qt_metacast(_clname);
}

int DataInfomation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE