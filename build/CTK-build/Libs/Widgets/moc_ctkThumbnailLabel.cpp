/****************************************************************************
** Meta object code from reading C++ file 'ctkThumbnailLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkThumbnailLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkThumbnailLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkThumbnailLabel_t {
    QByteArrayData data[12];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkThumbnailLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkThumbnailLabel_t qt_meta_stringdata_ctkThumbnailLabel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ctkThumbnailLabel"
QT_MOC_LITERAL(1, 18, 8), // "selected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "widget"
QT_MOC_LITERAL(4, 35, 13), // "doubleClicked"
QT_MOC_LITERAL(5, 49, 4), // "text"
QT_MOC_LITERAL(6, 54, 12), // "textPosition"
QT_MOC_LITERAL(7, 67, 13), // "Qt::Alignment"
QT_MOC_LITERAL(8, 81, 6), // "pixmap"
QT_MOC_LITERAL(9, 88, 18), // "transformationMode"
QT_MOC_LITERAL(10, 107, 22), // "Qt::TransformationMode"
QT_MOC_LITERAL(11, 130, 13) // "selectedColor"

    },
    "ctkThumbnailLabel\0selected\0\0widget\0"
    "doubleClicked\0text\0textPosition\0"
    "Qt::Alignment\0pixmap\0transformationMode\0"
    "Qt::TransformationMode\0selectedColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkThumbnailLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 0,    3,
    QMetaType::Void, 0x80000000 | 0,    3,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::QPixmap, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
       1, QMetaType::Bool, 0x00095103,
      11, QMetaType::QColor, 0x00095103,

       0        // eod
};

void ctkThumbnailLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkThumbnailLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const ctkThumbnailLabel(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< const ctkThumbnailLabel(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkThumbnailLabel::*)(const ctkThumbnailLabel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkThumbnailLabel::selected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkThumbnailLabel::*)(const ctkThumbnailLabel & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkThumbnailLabel::doubleClicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkThumbnailLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< Qt::Alignment*>(_v) = _t->textPosition(); break;
        case 2: _a[0] = const_cast<void*>(reinterpret_cast<const void*>(_t->pixmap())); break;
        case 3: *reinterpret_cast< Qt::TransformationMode*>(_v) = _t->transformationMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isSelected(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->selectedColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkThumbnailLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTextPosition(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 2: _t->setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: _t->setTransformationMode(*reinterpret_cast< Qt::TransformationMode*>(_v)); break;
        case 4: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkThumbnailLabel::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkThumbnailLabel.data,
    qt_meta_data_ctkThumbnailLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkThumbnailLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkThumbnailLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkThumbnailLabel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkThumbnailLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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

// SIGNAL 0
void ctkThumbnailLabel::selected(const ctkThumbnailLabel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkThumbnailLabel::doubleClicked(const ctkThumbnailLabel & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
