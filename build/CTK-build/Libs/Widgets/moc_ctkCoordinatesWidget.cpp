/****************************************************************************
** Meta object code from reading C++ file 'ctkCoordinatesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCoordinatesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCoordinatesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkCoordinatesWidget_t {
    QByteArrayData data[24];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCoordinatesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCoordinatesWidget_t qt_meta_stringdata_ctkCoordinatesWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCoordinatesWidget"
QT_MOC_LITERAL(1, 21, 18), // "coordinatesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "double*"
QT_MOC_LITERAL(4, 49, 3), // "pos"
QT_MOC_LITERAL(5, 53, 9), // "normalize"
QT_MOC_LITERAL(6, 63, 11), // "setDecimals"
QT_MOC_LITERAL(7, 75, 8), // "decimals"
QT_MOC_LITERAL(8, 84, 11), // "setReadOnly"
QT_MOC_LITERAL(9, 96, 8), // "readOnly"
QT_MOC_LITERAL(10, 105, 17), // "updateCoordinates"
QT_MOC_LITERAL(11, 123, 16), // "updateCoordinate"
QT_MOC_LITERAL(12, 140, 10), // "coordinate"
QT_MOC_LITERAL(13, 151, 9), // "dimension"
QT_MOC_LITERAL(14, 161, 10), // "normalized"
QT_MOC_LITERAL(15, 172, 14), // "decimalsOption"
QT_MOC_LITERAL(16, 187, 33), // "ctkDoubleSpinBox::DecimalsOpt..."
QT_MOC_LITERAL(17, 221, 10), // "singleStep"
QT_MOC_LITERAL(18, 232, 7), // "minimum"
QT_MOC_LITERAL(19, 240, 7), // "maximum"
QT_MOC_LITERAL(20, 248, 11), // "coordinates"
QT_MOC_LITERAL(21, 260, 14), // "sizeHintPolicy"
QT_MOC_LITERAL(22, 275, 32), // "ctkDoubleSpinBox::SizeHintPolicy"
QT_MOC_LITERAL(23, 308, 5) // "frame"

    },
    "ctkCoordinatesWidget\0coordinatesChanged\0"
    "\0double*\0pos\0normalize\0setDecimals\0"
    "decimals\0setReadOnly\0readOnly\0"
    "updateCoordinates\0updateCoordinate\0"
    "coordinate\0dimension\0normalized\0"
    "decimalsOption\0ctkDoubleSpinBox::DecimalsOptions\0"
    "singleStep\0minimum\0maximum\0coordinates\0"
    "sizeHintPolicy\0ctkDoubleSpinBox::SizeHintPolicy\0"
    "frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCoordinatesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      11,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x09 /* Protected */,
      11,    1,   55,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   12,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
       7, QMetaType::Int, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Double, 0x00085103,
      18, QMetaType::Double, 0x00095103,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::QString, 0x00095003,
      21, 0x80000000 | 22, 0x0009510b,
      23, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void ctkCoordinatesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkCoordinatesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coordinatesChanged((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 1: _t->normalize(); break;
        case 2: _t->setDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateCoordinates(); break;
        case 5: _t->updateCoordinate((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkCoordinatesWidget::*)(double * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkCoordinatesWidget::coordinatesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkCoordinatesWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->dimension(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isNormalized(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 3: *reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v) = _t->decimalsOption(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->singleStep(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->coordinatesAsString(); break;
        case 8: *reinterpret_cast< ctkDoubleSpinBox::SizeHintPolicy*>(_v) = _t->sizeHintPolicy(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasFrame(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkCoordinatesWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDimension(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNormalized(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDecimalsOption(*reinterpret_cast< ctkDoubleSpinBox::DecimalsOptions*>(_v)); break;
        case 4: _t->setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setCoordinatesAsString(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setSizeHintPolicy(*reinterpret_cast< ctkDoubleSpinBox::SizeHintPolicy*>(_v)); break;
        case 9: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ctkCoordinatesWidget[] = {
        &ctkDoubleSpinBox::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ctkCoordinatesWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkCoordinatesWidget.data,
    qt_meta_data_ctkCoordinatesWidget,
    qt_static_metacall,
    qt_meta_extradata_ctkCoordinatesWidget,
    nullptr
} };


const QMetaObject *ctkCoordinatesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCoordinatesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCoordinatesWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkCoordinatesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkCoordinatesWidget::coordinatesChanged(double * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
