/****************************************************************************
** Meta object code from reading C++ file 'ctkFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkFileDialog_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFileDialog_t qt_meta_stringdata_ctkFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ctkFileDialog"
QT_MOC_LITERAL(1, 14, 20), // "fileSelectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "selected"
QT_MOC_LITERAL(4, 45, 21), // "setAcceptButtonEnable"
QT_MOC_LITERAL(5, 67, 6), // "enable"
QT_MOC_LITERAL(6, 74, 14), // "clearSelection"
QT_MOC_LITERAL(7, 89, 18), // "onSelectionChanged"
QT_MOC_LITERAL(8, 108, 15), // "setBottomWidget"
QT_MOC_LITERAL(9, 124, 8), // "QWidget*"
QT_MOC_LITERAL(10, 133, 6), // "widget"
QT_MOC_LITERAL(11, 140, 5), // "label"
QT_MOC_LITERAL(12, 146, 12), // "bottomWidget"
QT_MOC_LITERAL(13, 159, 13), // "SelectionMode"
QT_MOC_LITERAL(14, 173, 32) // "QAbstractItemView::SelectionMode"

    },
    "ctkFileDialog\0fileSelectionChanged\0\0"
    "selected\0setAcceptButtonEnable\0enable\0"
    "clearSelection\0onSelectionChanged\0"
    "setBottomWidget\0QWidget*\0widget\0label\0"
    "bottomWidget\0SelectionMode\0"
    "QAbstractItemView::SelectionMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       8,    2,   57,    2, 0x02 /* Public */,
       8,    1,   62,    2, 0x22 /* Public | MethodCloned */,
      12,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0009510b,

       0        // eod
};

void ctkFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileSelectionChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->setAcceptButtonEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clearSelection(); break;
        case 3: _t->onSelectionChanged(); break;
        case 4: _t->setBottomWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->setBottomWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: { QWidget* _r = _t->bottomWidget();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkFileDialog::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkFileDialog::fileSelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkFileDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemView::SelectionMode*>(_v) = _t->selectionMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkFileDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionMode(*reinterpret_cast< QAbstractItemView::SelectionMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkFileDialog::staticMetaObject = { {
    &QFileDialog::staticMetaObject,
    qt_meta_stringdata_ctkFileDialog.data,
    qt_meta_data_ctkFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int ctkFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkFileDialog::fileSelectionChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
