/****************************************************************************
** Meta object code from reading C++ file 'ctkSizeGrip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkSizeGrip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkSizeGrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkSizeGrip_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkSizeGrip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkSizeGrip_t qt_meta_stringdata_ctkSizeGrip = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkSizeGrip"
QT_MOC_LITERAL(1, 12, 21), // "widgetSizeHintChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "sizeHint"
QT_MOC_LITERAL(4, 44, 17), // "setWidgetSizeHint"
QT_MOC_LITERAL(5, 62, 12), // "orientations"
QT_MOC_LITERAL(6, 75, 16), // "Qt::Orientations"
QT_MOC_LITERAL(7, 92, 14), // "widgetSizeHint"
QT_MOC_LITERAL(8, 107, 12) // "resizeWidget"

    },
    "ctkSizeGrip\0widgetSizeHintChanged\0\0"
    "sizeHint\0setWidgetSizeHint\0orientations\0"
    "Qt::Orientations\0widgetSizeHint\0"
    "resizeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkSizeGrip[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    3,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QSize, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkSizeGrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkSizeGrip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetSizeHintChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 1: _t->setWidgetSizeHint((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkSizeGrip::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkSizeGrip::widgetSizeHintChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkSizeGrip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientations*>(_v) = _t->orientations(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->widgetSizeHint(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->resizeWidget(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkSizeGrip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientations(*reinterpret_cast< Qt::Orientations*>(_v)); break;
        case 1: _t->setWidgetSizeHint(*reinterpret_cast< QSize*>(_v)); break;
        case 2: _t->setResizeWidget(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkSizeGrip::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkSizeGrip.data,
    qt_meta_data_ctkSizeGrip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkSizeGrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkSizeGrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkSizeGrip.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkSizeGrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ctkSizeGrip::widgetSizeHintChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
