/****************************************************************************
** Meta object code from reading C++ file 'ctkPathListButtonsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkPathListButtonsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkPathListButtonsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkPathListButtonsWidget_t {
    QByteArrayData data[21];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkPathListButtonsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkPathListButtonsWidget_t qt_meta_stringdata_ctkPathListButtonsWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkPathListButtonsWidget"
QT_MOC_LITERAL(1, 25, 18), // "showAddFilesButton"
QT_MOC_LITERAL(2, 44, 22), // "showAddDirectoryButton"
QT_MOC_LITERAL(3, 67, 16), // "showRemoveButton"
QT_MOC_LITERAL(4, 84, 14), // "showEditButton"
QT_MOC_LITERAL(5, 99, 18), // "textAddFilesButton"
QT_MOC_LITERAL(6, 118, 22), // "textAddDirectoryButton"
QT_MOC_LITERAL(7, 141, 16), // "textRemoveButton"
QT_MOC_LITERAL(8, 158, 14), // "textEditButton"
QT_MOC_LITERAL(9, 173, 21), // "toolTipAddFilesButton"
QT_MOC_LITERAL(10, 195, 25), // "toolTipAddDirectoryButton"
QT_MOC_LITERAL(11, 221, 19), // "toolTipRemoveButton"
QT_MOC_LITERAL(12, 241, 17), // "toolTipEditButton"
QT_MOC_LITERAL(13, 259, 18), // "iconAddFilesButton"
QT_MOC_LITERAL(14, 278, 22), // "iconAddDirectoryButton"
QT_MOC_LITERAL(15, 301, 16), // "iconRemoveButton"
QT_MOC_LITERAL(16, 318, 14), // "iconEditButton"
QT_MOC_LITERAL(17, 333, 16), // "buttonsAutoRaise"
QT_MOC_LITERAL(18, 350, 13), // "buttonSpacing"
QT_MOC_LITERAL(19, 364, 11), // "orientation"
QT_MOC_LITERAL(20, 376, 15) // "Qt::Orientation"

    },
    "ctkPathListButtonsWidget\0showAddFilesButton\0"
    "showAddDirectoryButton\0showRemoveButton\0"
    "showEditButton\0textAddFilesButton\0"
    "textAddDirectoryButton\0textRemoveButton\0"
    "textEditButton\0toolTipAddFilesButton\0"
    "toolTipAddDirectoryButton\0toolTipRemoveButton\0"
    "toolTipEditButton\0iconAddFilesButton\0"
    "iconAddDirectoryButton\0iconRemoveButton\0"
    "iconEditButton\0buttonsAutoRaise\0"
    "buttonSpacing\0orientation\0Qt::Orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkPathListButtonsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      19,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095003,
       2, QMetaType::Bool, 0x00095003,
       3, QMetaType::Bool, 0x00095003,
       4, QMetaType::Bool, 0x00095003,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QIcon, 0x00095107,
      14, QMetaType::QIcon, 0x00095107,
      15, QMetaType::QIcon, 0x00095107,
      16, QMetaType::QIcon, 0x00095107,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,

       0        // eod
};

void ctkPathListButtonsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkPathListButtonsWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAddFilesButtonVisible(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAddDirectoryButtonVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRemoveButtonVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isEditButtonVisible(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->textAddFilesButton(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->textAddDirectoryButton(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->textRemoveButton(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->textEditButton(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->toolTipAddFilesButton(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->toolTipAddDirectoryButton(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->toolTipRemoveButton(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->toolTipEditButton(); break;
        case 12: *reinterpret_cast< QIcon*>(_v) = _t->iconAddFilesButton(); break;
        case 13: *reinterpret_cast< QIcon*>(_v) = _t->iconAddDirectoryButton(); break;
        case 14: *reinterpret_cast< QIcon*>(_v) = _t->iconRemoveButton(); break;
        case 15: *reinterpret_cast< QIcon*>(_v) = _t->iconEditButton(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->isButtonsAutoRaise(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->buttonSpacing(); break;
        case 18: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkPathListButtonsWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddFilesButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAddDirectoryButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRemoveButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setEditButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTextAddFilesButton(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTextAddDirectoryButton(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setTextRemoveButton(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setTextEditButton(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setToolTipAddFilesButton(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setToolTipAddDirectoryButton(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setToolTipRemoveButton(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setToolTipEditButton(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setIconAddFilesButton(*reinterpret_cast< QIcon*>(_v)); break;
        case 13: _t->setIconAddDirectoryButton(*reinterpret_cast< QIcon*>(_v)); break;
        case 14: _t->setIconRemoveButton(*reinterpret_cast< QIcon*>(_v)); break;
        case 15: _t->setIconEditButton(*reinterpret_cast< QIcon*>(_v)); break;
        case 16: _t->setButtonsAutoRaise(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setButtonSpacing(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        ctkPathListButtonsWidget *_t = static_cast<ctkPathListButtonsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 12: _t->unsetIconAddFilesButton(); break;
        case 13: _t->unsetIconAddDirectoryButton(); break;
        case 14: _t->unsetIconRemoveButton(); break;
        case 15: _t->unsetIconEditButton(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ctkPathListButtonsWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkPathListButtonsWidget.data,
    qt_meta_data_ctkPathListButtonsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkPathListButtonsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkPathListButtonsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkPathListButtonsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkPathListButtonsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
