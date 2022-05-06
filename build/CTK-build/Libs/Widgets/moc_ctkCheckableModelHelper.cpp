/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckableModelHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckableModelHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckableModelHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkCheckableModelHelper_t {
    QByteArrayData data[28];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckableModelHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckableModelHelper_t qt_meta_stringdata_ctkCheckableModelHelper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ctkCheckableModelHelper"
QT_MOC_LITERAL(1, 24, 13), // "setCheckState"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 51, 10), // "modelIndex"
QT_MOC_LITERAL(5, 62, 14), // "Qt::CheckState"
QT_MOC_LITERAL(6, 77, 10), // "checkState"
QT_MOC_LITERAL(7, 88, 19), // "setHeaderCheckState"
QT_MOC_LITERAL(8, 108, 7), // "section"
QT_MOC_LITERAL(9, 116, 16), // "toggleCheckState"
QT_MOC_LITERAL(10, 133, 22), // "toggleHeaderCheckState"
QT_MOC_LITERAL(11, 156, 19), // "onHeaderDataChanged"
QT_MOC_LITERAL(12, 176, 15), // "Qt::Orientation"
QT_MOC_LITERAL(13, 192, 6), // "orient"
QT_MOC_LITERAL(14, 199, 5), // "first"
QT_MOC_LITERAL(15, 205, 4), // "last"
QT_MOC_LITERAL(16, 210, 13), // "onDataChanged"
QT_MOC_LITERAL(17, 224, 7), // "topLeft"
QT_MOC_LITERAL(18, 232, 11), // "bottomRight"
QT_MOC_LITERAL(19, 244, 22), // "updateHeadersFromItems"
QT_MOC_LITERAL(20, 267, 17), // "onColumnsInserted"
QT_MOC_LITERAL(21, 285, 6), // "parent"
QT_MOC_LITERAL(22, 292, 5), // "start"
QT_MOC_LITERAL(23, 298, 3), // "end"
QT_MOC_LITERAL(24, 302, 14), // "onRowsInserted"
QT_MOC_LITERAL(25, 317, 17), // "forceCheckability"
QT_MOC_LITERAL(26, 335, 14), // "propagateDepth"
QT_MOC_LITERAL(27, 350, 17) // "defaultCheckState"

    },
    "ctkCheckableModelHelper\0setCheckState\0"
    "\0QModelIndex\0modelIndex\0Qt::CheckState\0"
    "checkState\0setHeaderCheckState\0section\0"
    "toggleCheckState\0toggleHeaderCheckState\0"
    "onHeaderDataChanged\0Qt::Orientation\0"
    "orient\0first\0last\0onDataChanged\0topLeft\0"
    "bottomRight\0updateHeadersFromItems\0"
    "onColumnsInserted\0parent\0start\0end\0"
    "onRowsInserted\0forceCheckability\0"
    "propagateDepth\0defaultCheckState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckableModelHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x0a /* Public */,
       7,    2,   64,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      11,    3,   75,    2, 0x08 /* Private */,
      16,    2,   82,    2, 0x08 /* Private */,
      19,    0,   87,    2, 0x08 /* Private */,
      20,    3,   88,    2, 0x08 /* Private */,
      24,    3,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    8,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   17,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   21,   22,   23,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   21,   22,   23,

 // properties: name, type, flags
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Int, 0x00095103,
      27, 0x80000000 | 5, 0x0009510b,

       0        // eod
};

void ctkCheckableModelHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkCheckableModelHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 1: _t->setHeaderCheckState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 2: _t->toggleCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->toggleHeaderCheckState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onHeaderDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->updateHeadersFromItems(); break;
        case 7: _t->onColumnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->onRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkCheckableModelHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->forceCheckability(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->propagateDepth(); break;
        case 2: *reinterpret_cast< Qt::CheckState*>(_v) = _t->defaultCheckState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkCheckableModelHelper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setForceCheckability(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPropagateDepth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setDefaultCheckState(*reinterpret_cast< Qt::CheckState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkCheckableModelHelper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkCheckableModelHelper.data,
    qt_meta_data_ctkCheckableModelHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkCheckableModelHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckableModelHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckableModelHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkCheckableModelHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
