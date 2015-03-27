/****************************************************************************
** Meta object code from reading C++ file 'dbusclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusClient_t {
    QByteArrayData data[12];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusClient_t qt_meta_stringdata_DBusClient = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 18),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 4),
QT_MOC_LITERAL(4, 36, 26),
QT_MOC_LITERAL(5, 63, 24),
QT_MOC_LITERAL(6, 88, 6),
QT_MOC_LITERAL(7, 95, 6),
QT_MOC_LITERAL(8, 102, 11),
QT_MOC_LITERAL(9, 114, 15),
QT_MOC_LITERAL(10, 130, 3),
QT_MOC_LITERAL(11, 134, 5)
    },
    "DBusClient\0serviceDBusChanged\0\0text\0"
    "getNotifyClientDBusChanged\0"
    "getNotifyDBusTypeChanged\0MyType\0mytype\0"
    "callService\0callTypeService\0key\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   48,    2, 0x02 /* Public */,
       9,    2,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,

       0        // eod
};

void DBusClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusClient *_t = static_cast<DBusClient *>(_o);
        switch (_id) {
        case 0: _t->serviceDBusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->getNotifyClientDBusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->getNotifyDBusTypeChanged((*reinterpret_cast< const MyType(*)>(_a[1]))); break;
        case 3: _t->callService((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->callTypeService((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MyType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DBusClient::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusClient::serviceDBusChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject DBusClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBusClient.data,
      qt_meta_data_DBusClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *DBusClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBusClient.stringdata))
        return static_cast<void*>(const_cast< DBusClient*>(this));
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(const_cast< DBusClient*>(this));
    return QObject::qt_metacast(_clname);
}

int DBusClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DBusClient::serviceDBusChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
