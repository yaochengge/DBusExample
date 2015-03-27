/****************************************************************************
** Meta object code from reading C++ file 'dbusservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DBusService_t {
    QByteArrayData data[16];
    char stringdata[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusService_t qt_meta_stringdata_DBusService = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 21),
QT_MOC_LITERAL(3, 50, 23),
QT_MOC_LITERAL(4, 74, 0),
QT_MOC_LITERAL(5, 75, 4),
QT_MOC_LITERAL(6, 80, 20),
QT_MOC_LITERAL(7, 101, 21),
QT_MOC_LITERAL(8, 123, 6),
QT_MOC_LITERAL(9, 130, 6),
QT_MOC_LITERAL(10, 137, 13),
QT_MOC_LITERAL(11, 151, 17),
QT_MOC_LITERAL(12, 169, 8),
QT_MOC_LITERAL(13, 178, 12),
QT_MOC_LITERAL(14, 191, 3),
QT_MOC_LITERAL(15, 195, 5)
    },
    "DBusService\0D-Bus Interface\0"
    "cmos.testdbus.service\0notifyClientDBusChanged\0"
    "\0text\0notifyQMLDBusChanged\0"
    "notifyDBusTypeChanged\0MyType\0mytype\0"
    "serviceMethod\0serviceTypeMethod\0"
    "sendDBus\0sendTypeDBus\0key\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusService[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   51,    4, 0x06 /* Public */,
       6,    1,   54,    4, 0x06 /* Public */,
       7,    1,   57,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   60,    4, 0x0a /* Public */,
      11,    1,   63,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   66,    4, 0x02 /* Public */,
      13,    2,   69,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 8,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,

       0        // eod
};

void DBusService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DBusService *_t = static_cast<DBusService *>(_o);
        switch (_id) {
        case 0: _t->notifyClientDBusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->notifyQMLDBusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->notifyDBusTypeChanged((*reinterpret_cast< const MyType(*)>(_a[1]))); break;
        case 3: _t->serviceMethod((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->serviceTypeMethod((*reinterpret_cast< const MyType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->sendDBus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->sendTypeDBus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
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
        case 4:
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
            typedef void (DBusService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusService::notifyClientDBusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DBusService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusService::notifyQMLDBusChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (DBusService::*_t)(const MyType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DBusService::notifyDBusTypeChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject DBusService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DBusService.data,
      qt_meta_data_DBusService,  qt_static_metacall, 0, 0}
};


const QMetaObject *DBusService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBusService.stringdata))
        return static_cast<void*>(const_cast< DBusService*>(this));
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(const_cast< DBusService*>(this));
    return QObject::qt_metacast(_clname);
}

int DBusService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DBusService::notifyClientDBusChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusService::notifyQMLDBusChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusService::notifyDBusTypeChanged(const MyType & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
