/****************************************************************************
** Meta object code from reading C++ file 'ctkThumbnailListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkThumbnailListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkThumbnailListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkThumbnailListWidget_t {
    QByteArrayData data[14];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkThumbnailListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkThumbnailListWidget_t qt_meta_stringdata_ctkThumbnailListWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ctkThumbnailListWidget"
QT_MOC_LITERAL(1, 23, 8), // "selected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "ctkThumbnailLabel"
QT_MOC_LITERAL(4, 51, 6), // "widget"
QT_MOC_LITERAL(5, 58, 13), // "doubleClicked"
QT_MOC_LITERAL(6, 72, 16), // "setThumbnailSize"
QT_MOC_LITERAL(7, 89, 4), // "size"
QT_MOC_LITERAL(8, 94, 19), // "onThumbnailSelected"
QT_MOC_LITERAL(9, 114, 12), // "updateLayout"
QT_MOC_LITERAL(10, 127, 16), // "currentThumbnail"
QT_MOC_LITERAL(11, 144, 4), // "flow"
QT_MOC_LITERAL(12, 149, 15), // "Qt::Orientation"
QT_MOC_LITERAL(13, 165, 13) // "thumbnailSize"

    },
    "ctkThumbnailListWidget\0selected\0\0"
    "ctkThumbnailLabel\0widget\0doubleClicked\0"
    "setThumbnailSize\0size\0onThumbnailSelected\0"
    "updateLayout\0currentThumbnail\0flow\0"
    "Qt::Orientation\0thumbnailSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkThumbnailListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x09 /* Protected */,
       9,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Int, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::QSize, 0x00095103,

       0        // eod
};

void ctkThumbnailListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkThumbnailListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const ctkThumbnailLabel(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< const ctkThumbnailLabel(*)>(_a[1]))); break;
        case 2: _t->setThumbnailSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 3: _t->onThumbnailSelected((*reinterpret_cast< const ctkThumbnailLabel(*)>(_a[1]))); break;
        case 4: _t->updateLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkThumbnailListWidget::*)(const ctkThumbnailLabel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkThumbnailListWidget::selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkThumbnailListWidget::*)(const ctkThumbnailLabel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkThumbnailListWidget::doubleClicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkThumbnailListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentThumbnail(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->flow(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->thumbnailSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkThumbnailListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentThumbnail(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFlow(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: _t->setThumbnailSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkThumbnailListWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkThumbnailListWidget.data,
    qt_meta_data_ctkThumbnailListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkThumbnailListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkThumbnailListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkThumbnailListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkThumbnailListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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

// SIGNAL 0
void ctkThumbnailListWidget::selected(const ctkThumbnailLabel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkThumbnailListWidget::doubleClicked(const ctkThumbnailLabel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
