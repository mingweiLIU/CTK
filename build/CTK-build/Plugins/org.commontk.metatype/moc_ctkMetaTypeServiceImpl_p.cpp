/****************************************************************************
** Meta object code from reading C++ file 'ctkMetaTypeServiceImpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMetaTypeServiceImpl_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMetaTypeServiceImpl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMetaTypeServiceImpl_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMetaTypeServiceImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMetaTypeServiceImpl_t qt_meta_stringdata_ctkMetaTypeServiceImpl = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ctkMetaTypeServiceImpl"
QT_MOC_LITERAL(1, 23, 13), // "pluginChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "ctkPluginEvent"
QT_MOC_LITERAL(4, 53, 5) // "event"

    },
    "ctkMetaTypeServiceImpl\0pluginChanged\0"
    "\0ctkPluginEvent\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMetaTypeServiceImpl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ctkMetaTypeServiceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMetaTypeServiceImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pluginChanged((*reinterpret_cast< const ctkPluginEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkPluginEvent >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkMetaTypeServiceImpl::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkMetaTypeServiceImpl.data,
    qt_meta_data_ctkMetaTypeServiceImpl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkMetaTypeServiceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMetaTypeServiceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMetaTypeServiceImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ctkMetaTypeService"))
        return static_cast< ctkMetaTypeService*>(this);
    if (!strcmp(_clname, "org.commontk.service.metatype.MetaTypeServce"))
        return static_cast< ctkMetaTypeService*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkMetaTypeServiceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
