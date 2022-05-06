/****************************************************************************
** Meta object code from reading C++ file 'ctkComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkComboBox_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkComboBox_t qt_meta_stringdata_ctkComboBox = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkComboBox"
QT_MOC_LITERAL(1, 12, 26), // "setCurrentUserDataAsString"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "userData"
QT_MOC_LITERAL(4, 49, 11), // "defaultText"
QT_MOC_LITERAL(5, 61, 11), // "defaultIcon"
QT_MOC_LITERAL(6, 73, 12), // "forceDefault"
QT_MOC_LITERAL(7, 86, 9), // "elideMode"
QT_MOC_LITERAL(8, 96, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(9, 114, 17), // "scrollWheelEffect"
QT_MOC_LITERAL(10, 132, 12), // "ScrollEffect"
QT_MOC_LITERAL(11, 145, 23), // "currentUserDataAsString"
QT_MOC_LITERAL(12, 169, 11), // "NeverScroll"
QT_MOC_LITERAL(13, 181, 12), // "AlwaysScroll"
QT_MOC_LITERAL(14, 194, 15), // "ScrollWithFocus"
QT_MOC_LITERAL(15, 210, 22) // "ScrollWithNoVScrollBar"

    },
    "ctkComboBox\0setCurrentUserDataAsString\0"
    "\0userData\0defaultText\0defaultIcon\0"
    "forceDefault\0elideMode\0Qt::TextElideMode\0"
    "scrollWheelEffect\0ScrollEffect\0"
    "currentUserDataAsString\0NeverScroll\0"
    "AlwaysScroll\0ScrollWithFocus\0"
    "ScrollWithNoVScrollBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   22, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::QIcon, 0x00095103,
       6, QMetaType::Bool, 0x00095003,
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QString, 0x00095103,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,   45,

 // enum data: key, value
      12, uint(ctkComboBox::NeverScroll),
      13, uint(ctkComboBox::AlwaysScroll),
      14, uint(ctkComboBox::ScrollWithFocus),
      15, uint(ctkComboBox::ScrollWithNoVScrollBar),

       0        // eod
};

void ctkComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentUserDataAsString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultText(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->defaultIcon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isDefaultForced(); break;
        case 3: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->elideMode(); break;
        case 4: *reinterpret_cast< ScrollEffect*>(_v) = _t->scrollWheelEffect(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->currentUserDataAsString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->forceDefault(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 4: _t->setScrollWheelEffect(*reinterpret_cast< ScrollEffect*>(_v)); break;
        case 5: _t->setCurrentUserDataAsString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkComboBox::staticMetaObject = { {
    &QComboBox::staticMetaObject,
    qt_meta_stringdata_ctkComboBox.data,
    qt_meta_data_ctkComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int ctkComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
