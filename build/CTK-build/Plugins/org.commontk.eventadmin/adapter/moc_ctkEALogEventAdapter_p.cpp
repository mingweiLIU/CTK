/****************************************************************************
** Meta object code from reading C++ file 'ctkEALogEventAdapter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adapter/ctkEALogEventAdapter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkEALogEventAdapter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata__LogListener_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__LogListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__LogListener_t qt_meta_stringdata__LogListener = {
    {
QT_MOC_LITERAL(0, 0, 12) // "_LogListener"

    },
    "_LogListener"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__LogListener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void _LogListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject _LogListener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata__LogListener.data,
    qt_meta_data__LogListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *_LogListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_LogListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata__LogListener.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ctkLogListener"))
        return static_cast< ctkLogListener*>(this);
    if (!strcmp(_clname, "org.commontk.service.log.LogListener"))
        return static_cast< ctkLogListener*>(this);
    return QObject::qt_metacast(_clname);
}

int _LogListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ctkEALogEventAdapter_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkEALogEventAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkEALogEventAdapter_t qt_meta_stringdata_ctkEALogEventAdapter = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ctkEALogEventAdapter"

    },
    "ctkEALogEventAdapter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkEALogEventAdapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ctkEALogEventAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ctkEALogEventAdapter::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkEALogEventAdapter.data,
    qt_meta_data_ctkEALogEventAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkEALogEventAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkEALogEventAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkEALogEventAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ctkEAAbstractAdapter"))
        return static_cast< ctkEAAbstractAdapter*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkEALogEventAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
