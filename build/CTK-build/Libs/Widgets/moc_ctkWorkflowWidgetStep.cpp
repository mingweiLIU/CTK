/****************************************************************************
** Meta object code from reading C++ file 'ctkWorkflowWidgetStep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkWorkflowWidgetStep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkWorkflowWidgetStep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkWorkflowWidgetStep_t {
    QByteArrayData data[17];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkWorkflowWidgetStep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkWorkflowWidgetStep_t qt_meta_stringdata_ctkWorkflowWidgetStep = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ctkWorkflowWidgetStep"
QT_MOC_LITERAL(1, 22, 6), // "stepid"
QT_MOC_LITERAL(2, 29, 4), // "name"
QT_MOC_LITERAL(3, 34, 11), // "description"
QT_MOC_LITERAL(4, 46, 4), // "icon"
QT_MOC_LITERAL(5, 51, 10), // "statusText"
QT_MOC_LITERAL(6, 62, 14), // "backButtonText"
QT_MOC_LITERAL(7, 77, 14), // "nextButtonText"
QT_MOC_LITERAL(8, 92, 14), // "buttonBoxHints"
QT_MOC_LITERAL(9, 107, 14), // "ButtonBoxHints"
QT_MOC_LITERAL(10, 122, 13), // "ButtonBoxHint"
QT_MOC_LITERAL(11, 136, 7), // "NoHints"
QT_MOC_LITERAL(12, 144, 16), // "BackButtonHidden"
QT_MOC_LITERAL(13, 161, 18), // "BackButtonDisabled"
QT_MOC_LITERAL(14, 180, 16), // "NextButtonHidden"
QT_MOC_LITERAL(15, 197, 18), // "NextButtonDisabled"
QT_MOC_LITERAL(16, 216, 15) // "ButtonBoxHidden"

    },
    "ctkWorkflowWidgetStep\0stepid\0name\0"
    "description\0icon\0statusText\0backButtonText\0"
    "nextButtonText\0buttonBoxHints\0"
    "ButtonBoxHints\0ButtonBoxHint\0NoHints\0"
    "BackButtonHidden\0BackButtonDisabled\0"
    "NextButtonHidden\0NextButtonDisabled\0"
    "ButtonBoxHidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkWorkflowWidgetStep[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       2,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QIcon, 0x00095103,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, 0x80000000 | 9, 0x0009510b,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    6,   48,
       9,   10, 0x1,    6,   60,

 // enum data: key, value
      11, uint(ctkWorkflowWidgetStep::NoHints),
      12, uint(ctkWorkflowWidgetStep::BackButtonHidden),
      13, uint(ctkWorkflowWidgetStep::BackButtonDisabled),
      14, uint(ctkWorkflowWidgetStep::NextButtonHidden),
      15, uint(ctkWorkflowWidgetStep::NextButtonDisabled),
      16, uint(ctkWorkflowWidgetStep::ButtonBoxHidden),
      11, uint(ctkWorkflowWidgetStep::NoHints),
      12, uint(ctkWorkflowWidgetStep::BackButtonHidden),
      13, uint(ctkWorkflowWidgetStep::BackButtonDisabled),
      14, uint(ctkWorkflowWidgetStep::NextButtonHidden),
      15, uint(ctkWorkflowWidgetStep::NextButtonDisabled),
      16, uint(ctkWorkflowWidgetStep::ButtonBoxHidden),

       0        // eod
};

void ctkWorkflowWidgetStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkWorkflowWidgetStep *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->statusText(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->backButtonText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->nextButtonText(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(_t->buttonBoxHints()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkWorkflowWidgetStep *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->setBackButtonText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setNextButtonText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setButtonBoxHints(QFlag(*reinterpret_cast<int*>(_v))); break;
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

QT_INIT_METAOBJECT const QMetaObject ctkWorkflowWidgetStep::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkWorkflowWidgetStep.data,
    qt_meta_data_ctkWorkflowWidgetStep,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkWorkflowWidgetStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkWorkflowWidgetStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkWorkflowWidgetStep.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ctkWorkflowStep"))
        return static_cast< ctkWorkflowStep*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkWorkflowWidgetStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
