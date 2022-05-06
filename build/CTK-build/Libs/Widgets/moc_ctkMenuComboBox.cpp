/****************************************************************************
** Meta object code from reading C++ file 'ctkMenuComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMenuComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMenuComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMenuComboBox_t {
    QByteArrayData data[27];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMenuComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMenuComboBox_t qt_meta_stringdata_ctkMenuComboBox = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkMenuComboBox"
QT_MOC_LITERAL(1, 16, 13), // "actionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "QAction*"
QT_MOC_LITERAL(4, 40, 6), // "action"
QT_MOC_LITERAL(5, 47, 10), // "popupShown"
QT_MOC_LITERAL(6, 58, 17), // "clearActiveAction"
QT_MOC_LITERAL(7, 76, 18), // "setToolButtonStyle"
QT_MOC_LITERAL(8, 95, 19), // "Qt::ToolButtonStyle"
QT_MOC_LITERAL(9, 115, 5), // "style"
QT_MOC_LITERAL(10, 121, 16), // "onActionSelected"
QT_MOC_LITERAL(11, 138, 17), // "onEditingFinished"
QT_MOC_LITERAL(12, 156, 7), // "setMenu"
QT_MOC_LITERAL(13, 164, 6), // "QMenu*"
QT_MOC_LITERAL(14, 171, 4), // "menu"
QT_MOC_LITERAL(15, 176, 16), // "setCompleterMenu"
QT_MOC_LITERAL(16, 193, 13), // "completerMenu"
QT_MOC_LITERAL(17, 207, 11), // "defaultText"
QT_MOC_LITERAL(18, 219, 11), // "defaultIcon"
QT_MOC_LITERAL(19, 231, 12), // "editBehavior"
QT_MOC_LITERAL(20, 244, 16), // "EditableBehavior"
QT_MOC_LITERAL(21, 261, 17), // "searchIconVisible"
QT_MOC_LITERAL(22, 279, 15), // "toolButtonStyle"
QT_MOC_LITERAL(23, 295, 11), // "NotEditable"
QT_MOC_LITERAL(24, 307, 8), // "Editable"
QT_MOC_LITERAL(25, 316, 15), // "EditableOnFocus"
QT_MOC_LITERAL(26, 332, 15) // "EditableOnPopup"

    },
    "ctkMenuComboBox\0actionChanged\0\0QAction*\0"
    "action\0popupShown\0clearActiveAction\0"
    "setToolButtonStyle\0Qt::ToolButtonStyle\0"
    "style\0onActionSelected\0onEditingFinished\0"
    "setMenu\0QMenu*\0menu\0setCompleterMenu\0"
    "completerMenu\0defaultText\0defaultIcon\0"
    "editBehavior\0EditableBehavior\0"
    "searchIconVisible\0toolButtonStyle\0"
    "NotEditable\0Editable\0EditableOnFocus\0"
    "EditableOnPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMenuComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   84, // properties
       1,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   68,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x09 /* Protected */,
      11,    0,   75,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   76,    2, 0x02 /* Public */,
      14,    0,   79,    2, 0x02 /* Public */,
      15,    1,   80,    2, 0x02 /* Public */,
      16,    0,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    0x80000000 | 13,
    QMetaType::Void, 0x80000000 | 13,   14,
    0x80000000 | 13,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::QIcon, 0x00095103,
      19, 0x80000000 | 20, 0x0009500b,
      21, QMetaType::Bool, 0x00095103,
      22, 0x80000000 | 8, 0x0009510b,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,    4,  104,

 // enum data: key, value
      23, uint(ctkMenuComboBox::NotEditable),
      24, uint(ctkMenuComboBox::Editable),
      25, uint(ctkMenuComboBox::EditableOnFocus),
      26, uint(ctkMenuComboBox::EditableOnPopup),

       0        // eod
};

void ctkMenuComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMenuComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->popupShown(); break;
        case 2: _t->clearActiveAction(); break;
        case 3: _t->setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 4: _t->onActionSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->onEditingFinished(); break;
        case 6: _t->setMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 7: { QMenu* _r = _t->menu();
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCompleterMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 9: { QMenu* _r = _t->completerMenu();
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkMenuComboBox::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMenuComboBox::actionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkMenuComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMenuComboBox::popupShown)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkMenuComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->defaultText(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->defaultIcon(); break;
        case 2: *reinterpret_cast< EditableBehavior*>(_v) = _t->editableBehavior(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isSearchIconVisible(); break;
        case 4: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkMenuComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->setEditableBehavior(*reinterpret_cast< EditableBehavior*>(_v)); break;
        case 3: _t->setSearchIconVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkMenuComboBox::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkMenuComboBox.data,
    qt_meta_data_ctkMenuComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkMenuComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMenuComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMenuComboBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkMenuComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkMenuComboBox::actionChanged(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkMenuComboBox::popupShown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
