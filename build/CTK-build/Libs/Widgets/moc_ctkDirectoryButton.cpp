/****************************************************************************
** Meta object code from reading C++ file 'ctkDirectoryButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkDirectoryButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkDirectoryButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkDirectoryButton_t {
    QByteArrayData data[23];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkDirectoryButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkDirectoryButton_t qt_meta_stringdata_ctkDirectoryButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ctkDirectoryButton"
QT_MOC_LITERAL(1, 19, 16), // "directoryChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "directorySelected"
QT_MOC_LITERAL(4, 55, 6), // "browse"
QT_MOC_LITERAL(5, 62, 10), // "acceptMode"
QT_MOC_LITERAL(6, 73, 23), // "QFileDialog::AcceptMode"
QT_MOC_LITERAL(7, 97, 9), // "directory"
QT_MOC_LITERAL(8, 107, 7), // "caption"
QT_MOC_LITERAL(9, 115, 4), // "text"
QT_MOC_LITERAL(10, 120, 4), // "icon"
QT_MOC_LITERAL(11, 125, 9), // "elideMode"
QT_MOC_LITERAL(12, 135, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(13, 153, 7), // "options"
QT_MOC_LITERAL(14, 161, 7), // "Options"
QT_MOC_LITERAL(15, 169, 6), // "Option"
QT_MOC_LITERAL(16, 176, 12), // "ShowDirsOnly"
QT_MOC_LITERAL(17, 189, 19), // "DontResolveSymlinks"
QT_MOC_LITERAL(18, 209, 20), // "DontConfirmOverwrite"
QT_MOC_LITERAL(19, 230, 12), // "DontUseSheet"
QT_MOC_LITERAL(20, 243, 19), // "DontUseNativeDialog"
QT_MOC_LITERAL(21, 263, 8), // "ReadOnly"
QT_MOC_LITERAL(22, 272, 21) // "HideNameFilterDetails"

    },
    "ctkDirectoryButton\0directoryChanged\0"
    "\0directorySelected\0browse\0acceptMode\0"
    "QFileDialog::AcceptMode\0directory\0"
    "caption\0text\0icon\0elideMode\0"
    "Qt::TextElideMode\0options\0Options\0"
    "Option\0ShowDirsOnly\0DontResolveSymlinks\0"
    "DontConfirmOverwrite\0DontUseSheet\0"
    "DontUseNativeDialog\0ReadOnly\0"
    "HideNameFilterDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkDirectoryButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   36, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00595103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QIcon, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, 0x80000000 | 14, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      15,   15, 0x1,    7,   74,
      14,   15, 0x1,    7,   88,

 // enum data: key, value
      16, uint(ctkDirectoryButton::ShowDirsOnly),
      17, uint(ctkDirectoryButton::DontResolveSymlinks),
      18, uint(ctkDirectoryButton::DontConfirmOverwrite),
      19, uint(ctkDirectoryButton::DontUseSheet),
      20, uint(ctkDirectoryButton::DontUseNativeDialog),
      21, uint(ctkDirectoryButton::ReadOnly),
      22, uint(ctkDirectoryButton::HideNameFilterDetails),
      16, uint(ctkDirectoryButton::ShowDirsOnly),
      17, uint(ctkDirectoryButton::DontResolveSymlinks),
      18, uint(ctkDirectoryButton::DontConfirmOverwrite),
      19, uint(ctkDirectoryButton::DontUseSheet),
      20, uint(ctkDirectoryButton::DontUseNativeDialog),
      21, uint(ctkDirectoryButton::ReadOnly),
      22, uint(ctkDirectoryButton::HideNameFilterDetails),

       0        // eod
};

void ctkDirectoryButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkDirectoryButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directorySelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->browse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkDirectoryButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDirectoryButton::directoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkDirectoryButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkDirectoryButton::directorySelected)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkDirectoryButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFileDialog::AcceptMode*>(_v) = _t->acceptMode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->directory(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->caption(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 5: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->elideMode(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkDirectoryButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAcceptMode(*reinterpret_cast< QFileDialog::AcceptMode*>(_v)); break;
        case 1: _t->setDirectory(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCaption(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->setElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 6: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkDirectoryButton::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkDirectoryButton.data,
    qt_meta_data_ctkDirectoryButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkDirectoryButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkDirectoryButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkDirectoryButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkDirectoryButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkDirectoryButton::directoryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkDirectoryButton::directorySelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
