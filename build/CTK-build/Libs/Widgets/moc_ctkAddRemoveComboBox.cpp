/****************************************************************************
** Meta object code from reading C++ file 'ctkAddRemoveComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkAddRemoveComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkAddRemoveComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkAddRemoveComboBox_t {
    QByteArrayData data[23];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkAddRemoveComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkAddRemoveComboBox_t qt_meta_stringdata_ctkAddRemoveComboBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkAddRemoveComboBox"
QT_MOC_LITERAL(1, 21, 19), // "currentIndexChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "index"
QT_MOC_LITERAL(4, 48, 9), // "activated"
QT_MOC_LITERAL(5, 58, 9), // "itemAdded"
QT_MOC_LITERAL(6, 68, 20), // "itemAboutToBeRemoved"
QT_MOC_LITERAL(7, 89, 11), // "itemRemoved"
QT_MOC_LITERAL(8, 101, 15), // "setCurrentIndex"
QT_MOC_LITERAL(9, 117, 5), // "onAdd"
QT_MOC_LITERAL(10, 123, 8), // "onRemove"
QT_MOC_LITERAL(11, 132, 6), // "onEdit"
QT_MOC_LITERAL(12, 139, 22), // "onRowsAboutToBeRemoved"
QT_MOC_LITERAL(13, 162, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 174, 6), // "parent"
QT_MOC_LITERAL(15, 181, 5), // "start"
QT_MOC_LITERAL(16, 187, 3), // "end"
QT_MOC_LITERAL(17, 191, 14), // "onRowsInserted"
QT_MOC_LITERAL(18, 206, 13), // "onRowsRemoved"
QT_MOC_LITERAL(19, 220, 9), // "emptyText"
QT_MOC_LITERAL(20, 230, 10), // "addEnabled"
QT_MOC_LITERAL(21, 241, 13), // "removeEnabled"
QT_MOC_LITERAL(22, 255, 11) // "editEnabled"

    },
    "ctkAddRemoveComboBox\0currentIndexChanged\0"
    "\0index\0activated\0itemAdded\0"
    "itemAboutToBeRemoved\0itemRemoved\0"
    "setCurrentIndex\0onAdd\0onRemove\0onEdit\0"
    "onRowsAboutToBeRemoved\0QModelIndex\0"
    "parent\0start\0end\0onRowsInserted\0"
    "onRowsRemoved\0emptyText\0addEnabled\0"
    "removeEnabled\0editEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkAddRemoveComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   89,    2, 0x0a /* Public */,
       9,    0,   92,    2, 0x09 /* Protected */,
      10,    0,   93,    2, 0x09 /* Protected */,
      11,    0,   94,    2, 0x09 /* Protected */,
      12,    3,   95,    2, 0x08 /* Private */,
      17,    3,  102,    2, 0x08 /* Private */,
      18,    3,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   14,   15,   16,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkAddRemoveComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkAddRemoveComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->itemAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->itemAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->itemRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onAdd(); break;
        case 7: _t->onRemove(); break;
        case 8: _t->onEdit(); break;
        case 9: _t->onRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->onRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->onRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkAddRemoveComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAddRemoveComboBox::currentIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkAddRemoveComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAddRemoveComboBox::activated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkAddRemoveComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAddRemoveComboBox::itemAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ctkAddRemoveComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAddRemoveComboBox::itemAboutToBeRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ctkAddRemoveComboBox::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkAddRemoveComboBox::itemRemoved)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkAddRemoveComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->emptyText(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->addEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->removeEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->editEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkAddRemoveComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEmptyText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAddEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRemoveEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkAddRemoveComboBox::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkAddRemoveComboBox.data,
    qt_meta_data_ctkAddRemoveComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkAddRemoveComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkAddRemoveComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkAddRemoveComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkAddRemoveComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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

// SIGNAL 0
void ctkAddRemoveComboBox::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkAddRemoveComboBox::activated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkAddRemoveComboBox::itemAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkAddRemoveComboBox::itemAboutToBeRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkAddRemoveComboBox::itemRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
