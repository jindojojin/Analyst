/****************************************************************************
** Meta object code from reading C++ file 'fileanalyst.h'
**
** Created: Wed Apr 3 12:12:35 2019
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fileanalyst.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileanalyst.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileAnalyst[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,
      56,   12,   12,   12, 0x05,
      91,   12,   12,   12, 0x05,
     125,   12,   12,   12, 0x05,
     157,   12,   12,   12, 0x05,
     186,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     206,   12,   12,   12, 0x0a,
     230,   12,   12,   12, 0x0a,
     253,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileAnalyst[] = {
    "FileAnalyst\0\0,\0add_infor_to_mainwindow(QString,QString)\0"
    "add_row_to_mainwindow(QStringList)\0"
    "add_header_to_viewer(QStringList)\0"
    "add_data_to_viewer(QStringList)\0"
    "add_infor_to_viewer(QString)\0"
    "send_error(QString)\0read_file_html(QString)\0"
    "read_file_log(QString)\0"
    "change_name_of_data(QString)\0"
};

const QMetaObject FileAnalyst::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileAnalyst,
      qt_meta_data_FileAnalyst, 0 }
};

const QMetaObject *FileAnalyst::metaObject() const
{
    return &staticMetaObject;
}

void *FileAnalyst::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileAnalyst))
	return static_cast<void*>(const_cast< FileAnalyst*>(this));
    return QObject::qt_metacast(_clname);
}

int FileAnalyst::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: add_infor_to_mainwindow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: add_row_to_mainwindow((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: add_header_to_viewer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: add_data_to_viewer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: add_infor_to_viewer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: send_error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: read_file_html((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: read_file_log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: change_name_of_data((*reinterpret_cast< QString(*)>(_a[1]))); break;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FileAnalyst::add_infor_to_mainwindow(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileAnalyst::add_row_to_mainwindow(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileAnalyst::add_header_to_viewer(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileAnalyst::add_data_to_viewer(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileAnalyst::add_infor_to_viewer(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileAnalyst::send_error(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
