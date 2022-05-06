/****************************************************************************
** Meta object code from reading C++ file 'ctkDynamicSpacer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDynamicSpacer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDynamicSpacer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkDynamicSpacer_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDynamicSpacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDynamicSpacer_t qt_meta_stringdata_ctkDynamicSpacer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ctkDynamicSpacer"
QT_MOC_LITERAL(1, 17, 9), // "setActive"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "enable"
QT_MOC_LITERAL(4, 35, 11), // "setInactive"
QT_MOC_LITERAL(5, 47, 7), // "disable"
QT_MOC_LITERAL(6, 55, 16), // "activeSizePolicy"
QT_MOC_LITERAL(7, 72, 18), // "inactiveSizePolicy"
QT_MOC_LITERAL(8, 91, 6) // "active"

    },
    "ctkDynamicSpacer\0setActive\0\0enable\0"
    "setInactive\0disable\0activeSizePolicy\0"
    "inactiveSizePolicy\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDynamicSpacer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       6, QMetaType::QSizePolicy, 0x00095103,
       7, QMetaType::QSizePolicy, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkDynamicSpacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkDynamicSpacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setInactive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkDynamicSpacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSizePolicy*>(_v) = _t->activeSizePolicy(); break;
        case 1: *reinterpret_cast< QSizePolicy*>(_v) = _t->inactiveSizePolicy(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkDynamicSpacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 1: _t->setInactiveSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkDynamicSpacer::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkDynamicSpacer.data,
    qt_meta_data_ctkDynamicSpacer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkDynamicSpacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDynamicSpacer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDynamicSpacer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkDynamicSpacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
