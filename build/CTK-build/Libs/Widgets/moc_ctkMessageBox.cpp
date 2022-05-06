/****************************************************************************
** Meta object code from reading C++ file 'ctkMessageBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMessageBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMessageBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMessageBox_t {
    QByteArrayData data[14];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMessageBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMessageBox_t qt_meta_stringdata_ctkMessageBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkMessageBox"
QT_MOC_LITERAL(1, 14, 16), // "setDontShowAgain"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "dontShow"
QT_MOC_LITERAL(4, 41, 10), // "onFinished"
QT_MOC_LITERAL(5, 52, 10), // "resultCode"
QT_MOC_LITERAL(6, 63, 26), // "addDontShowAgainButtonRole"
QT_MOC_LITERAL(7, 90, 23), // "QMessageBox::ButtonRole"
QT_MOC_LITERAL(8, 114, 4), // "role"
QT_MOC_LITERAL(9, 119, 13), // "dontShowAgain"
QT_MOC_LITERAL(10, 133, 24), // "dontShowAgainButtonRoles"
QT_MOC_LITERAL(11, 158, 30), // "QList<QMessageBox::ButtonRole>"
QT_MOC_LITERAL(12, 189, 24), // "dontShowAgainSettingsKey"
QT_MOC_LITERAL(13, 214, 20) // "dontShowAgainVisible"

    },
    "ctkMessageBox\0setDontShowAgain\0\0"
    "dontShow\0onFinished\0resultCode\0"
    "addDontShowAgainButtonRole\0"
    "QMessageBox::ButtonRole\0role\0dontShowAgain\0"
    "dontShowAgainButtonRoles\0"
    "QList<QMessageBox::ButtonRole>\0"
    "dontShowAgainSettingsKey\0dontShowAgainVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMessageBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMessageBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDontShowAgain((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addDontShowAgainButtonRole((*reinterpret_cast< QMessageBox::ButtonRole(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkMessageBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->dontShowAgain(); break;
        case 1: *reinterpret_cast< QList<QMessageBox::ButtonRole>*>(_v) = _t->dontShowAgainButtonRoles(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->dontShowAgainSettingsKey(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isDontShowAgainVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkMessageBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDontShowAgain(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDontShowAgainButtonRoles(*reinterpret_cast< QList<QMessageBox::ButtonRole>*>(_v)); break;
        case 2: _t->setDontShowAgainSettingsKey(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDontShowAgainVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkMessageBox::staticMetaObject = { {
    &QMessageBox::staticMetaObject,
    qt_meta_stringdata_ctkMessageBox.data,
    qt_meta_data_ctkMessageBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMessageBox.stringdata0))
        return static_cast<void*>(this);
    return QMessageBox::qt_metacast(_clname);
}

int ctkMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMessageBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
