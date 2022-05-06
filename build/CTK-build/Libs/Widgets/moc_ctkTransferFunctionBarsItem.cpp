/****************************************************************************
** Meta object code from reading C++ file 'ctkTransferFunctionBarsItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkTransferFunctionBarsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkTransferFunctionBarsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkTransferFunctionBarsItem_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkTransferFunctionBarsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkTransferFunctionBarsItem_t qt_meta_stringdata_ctkTransferFunctionBarsItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ctkTransferFunctionBarsItem"
QT_MOC_LITERAL(1, 28, 8), // "barWidth"
QT_MOC_LITERAL(2, 37, 8), // "barColor"
QT_MOC_LITERAL(3, 46, 7), // "logMode"
QT_MOC_LITERAL(4, 54, 7), // "LogMode"
QT_MOC_LITERAL(5, 62, 5), // "NoLog"
QT_MOC_LITERAL(6, 68, 6), // "UseLog"
QT_MOC_LITERAL(7, 75, 7) // "AutoLog"

    },
    "ctkTransferFunctionBarsItem\0barWidth\0"
    "barColor\0logMode\0LogMode\0NoLog\0UseLog\0"
    "AutoLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkTransferFunctionBarsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    3,   28,

 // enum data: key, value
       5, uint(ctkTransferFunctionBarsItem::NoLog),
       6, uint(ctkTransferFunctionBarsItem::UseLog),
       7, uint(ctkTransferFunctionBarsItem::AutoLog),

       0        // eod
};

void ctkTransferFunctionBarsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkTransferFunctionBarsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->barWidth(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->barColor(); break;
        case 2: *reinterpret_cast< LogMode*>(_v) = _t->logMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkTransferFunctionBarsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBarWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setBarColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setLogMode(*reinterpret_cast< LogMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ctkTransferFunctionBarsItem::staticMetaObject = { {
    &ctkTransferFunctionItem::staticMetaObject,
    qt_meta_stringdata_ctkTransferFunctionBarsItem.data,
    qt_meta_data_ctkTransferFunctionBarsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkTransferFunctionBarsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkTransferFunctionBarsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkTransferFunctionBarsItem.stringdata0))
        return static_cast<void*>(this);
    return ctkTransferFunctionItem::qt_metacast(_clname);
}

int ctkTransferFunctionBarsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkTransferFunctionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
