/****************************************************************************
** Meta object code from reading C++ file 'ctkAxesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkAxesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkAxesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkAxesWidget_t {
    QByteArrayData data[27];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkAxesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkAxesWidget_t qt_meta_stringdata_ctkAxesWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkAxesWidget"
QT_MOC_LITERAL(1, 14, 18), // "currentAxisChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "ctkAxesWidget::Axis"
QT_MOC_LITERAL(4, 54, 4), // "axis"
QT_MOC_LITERAL(5, 59, 14), // "setCurrentAxis"
QT_MOC_LITERAL(6, 74, 4), // "Axis"
QT_MOC_LITERAL(7, 79, 20), // "setCurrentAxisToNone"
QT_MOC_LITERAL(8, 100, 12), // "setAutoReset"
QT_MOC_LITERAL(9, 113, 5), // "reset"
QT_MOC_LITERAL(10, 119, 13), // "setAxesLabels"
QT_MOC_LITERAL(11, 133, 6), // "labels"
QT_MOC_LITERAL(12, 140, 10), // "axesLabels"
QT_MOC_LITERAL(13, 151, 15), // "minimumSizeHint"
QT_MOC_LITERAL(14, 167, 8), // "sizeHint"
QT_MOC_LITERAL(15, 176, 17), // "hasHeightForWidth"
QT_MOC_LITERAL(16, 194, 14), // "heightForWidth"
QT_MOC_LITERAL(17, 209, 5), // "width"
QT_MOC_LITERAL(18, 215, 11), // "currentAxis"
QT_MOC_LITERAL(19, 227, 9), // "autoReset"
QT_MOC_LITERAL(20, 237, 4), // "None"
QT_MOC_LITERAL(21, 242, 5), // "Right"
QT_MOC_LITERAL(22, 248, 4), // "Left"
QT_MOC_LITERAL(23, 253, 8), // "Superior"
QT_MOC_LITERAL(24, 262, 8), // "Inferior"
QT_MOC_LITERAL(25, 271, 8), // "Anterior"
QT_MOC_LITERAL(26, 280, 9) // "Posterior"

    },
    "ctkAxesWidget\0currentAxisChanged\0\0"
    "ctkAxesWidget::Axis\0axis\0setCurrentAxis\0"
    "Axis\0setCurrentAxisToNone\0setAutoReset\0"
    "reset\0setAxesLabels\0labels\0axesLabels\0"
    "minimumSizeHint\0sizeHint\0hasHeightForWidth\0"
    "heightForWidth\0width\0currentAxis\0"
    "autoReset\0None\0Right\0Left\0Superior\0"
    "Inferior\0Anterior\0Posterior"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkAxesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   84, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   67,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,
      15,    0,   80,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool, QMetaType::QStringList,   11,
    QMetaType::QStringList,
    QMetaType::QSize,
    QMetaType::QSize,
    QMetaType::Bool,
    QMetaType::Int, QMetaType::Int,   17,

 // properties: name, type, flags
      18, 0x80000000 | 6, 0x0049510b,
      19, QMetaType::Bool, 0x00095103,
      12, QMetaType::QStringList, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    7,  101,

 // enum data: key, value
      20, uint(ctkAxesWidget::None),
      21, uint(ctkAxesWidget::Right),
      22, uint(ctkAxesWidget::Left),
      23, uint(ctkAxesWidget::Superior),
      24, uint(ctkAxesWidget::Inferior),
      25, uint(ctkAxesWidget::Anterior),
      26, uint(ctkAxesWidget::Posterior),

       0        // eod
};

void ctkAxesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkAxesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentAxisChanged((*reinterpret_cast< ctkAxesWidget::Axis(*)>(_a[1]))); break;
        case 1: _t->setCurrentAxis((*reinterpret_cast< Axis(*)>(_a[1]))); break;
        case 2: _t->setCurrentAxisToNone(); break;
        case 3: _t->setAutoReset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->setAxesLabels((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->axesLabels();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { QSize _r = _t->minimumSizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 7: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->hasHeightForWidth();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->heightForWidth((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ctkAxesWidget::Axis >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkAxesWidget::*)(ctkAxesWidget::Axis );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAxesWidget::currentAxisChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkAxesWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Axis*>(_v) = _t->currentAxis(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoReset(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->axesLabels(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkAxesWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentAxis(*reinterpret_cast< Axis*>(_v)); break;
        case 1: _t->setAutoReset(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAxesLabels(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkAxesWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkAxesWidget.data,
    qt_meta_data_ctkAxesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkAxesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkAxesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkAxesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkAxesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void ctkAxesWidget::currentAxisChanged(ctkAxesWidget::Axis _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
