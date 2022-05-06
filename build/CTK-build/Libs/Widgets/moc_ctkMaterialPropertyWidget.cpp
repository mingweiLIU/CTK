/****************************************************************************
** Meta object code from reading C++ file 'ctkMaterialPropertyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkMaterialPropertyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkMaterialPropertyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkMaterialPropertyWidget_t {
    QByteArrayData data[65];
    char stringdata0[1004];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkMaterialPropertyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkMaterialPropertyWidget_t qt_meta_stringdata_ctkMaterialPropertyWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ctkMaterialPropertyWidget"
QT_MOC_LITERAL(1, 26, 12), // "colorChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "newColor"
QT_MOC_LITERAL(4, 49, 14), // "opacityChanged"
QT_MOC_LITERAL(5, 64, 10), // "newOpacity"
QT_MOC_LITERAL(6, 75, 24), // "interpolationModeChanged"
QT_MOC_LITERAL(7, 100, 17), // "interpolationMode"
QT_MOC_LITERAL(8, 118, 14), // "ambientChanged"
QT_MOC_LITERAL(9, 133, 10), // "newAmbient"
QT_MOC_LITERAL(10, 144, 14), // "diffuseChanged"
QT_MOC_LITERAL(11, 159, 10), // "newDiffuse"
QT_MOC_LITERAL(12, 170, 15), // "specularChanged"
QT_MOC_LITERAL(13, 186, 11), // "newSpecular"
QT_MOC_LITERAL(14, 198, 20), // "specularPowerChanged"
QT_MOC_LITERAL(15, 219, 16), // "newSpecularPower"
QT_MOC_LITERAL(16, 236, 15), // "metallicChanged"
QT_MOC_LITERAL(17, 252, 11), // "newMetallic"
QT_MOC_LITERAL(18, 264, 16), // "roughnessChanged"
QT_MOC_LITERAL(19, 281, 12), // "newRoughness"
QT_MOC_LITERAL(20, 294, 22), // "backfaceCullingChanged"
QT_MOC_LITERAL(21, 317, 18), // "newBackfaceCulling"
QT_MOC_LITERAL(22, 336, 8), // "setColor"
QT_MOC_LITERAL(23, 345, 10), // "setOpacity"
QT_MOC_LITERAL(24, 356, 20), // "setInterpolationMode"
QT_MOC_LITERAL(25, 377, 17), // "InterpolationMode"
QT_MOC_LITERAL(26, 395, 10), // "setAmbient"
QT_MOC_LITERAL(27, 406, 10), // "setDiffuse"
QT_MOC_LITERAL(28, 417, 11), // "setSpecular"
QT_MOC_LITERAL(29, 429, 16), // "setSpecularPower"
QT_MOC_LITERAL(30, 446, 11), // "setMetallic"
QT_MOC_LITERAL(31, 458, 12), // "setRoughness"
QT_MOC_LITERAL(32, 471, 18), // "setBackfaceCulling"
QT_MOC_LITERAL(33, 490, 6), // "enable"
QT_MOC_LITERAL(34, 497, 14), // "onColorChanged"
QT_MOC_LITERAL(35, 512, 16), // "onOpacityChanged"
QT_MOC_LITERAL(36, 529, 26), // "onInterpolationModeChanged"
QT_MOC_LITERAL(37, 556, 22), // "interpolationModeIndex"
QT_MOC_LITERAL(38, 579, 16), // "onAmbientChanged"
QT_MOC_LITERAL(39, 596, 16), // "onDiffuseChanged"
QT_MOC_LITERAL(40, 613, 17), // "onSpecularChanged"
QT_MOC_LITERAL(41, 631, 22), // "onSpecularPowerChanged"
QT_MOC_LITERAL(42, 654, 17), // "onMetallicChanged"
QT_MOC_LITERAL(43, 672, 18), // "onRoughnessChanged"
QT_MOC_LITERAL(44, 691, 24), // "onBackfaceCullingChanged"
QT_MOC_LITERAL(45, 716, 18), // "newBackFaceCulling"
QT_MOC_LITERAL(46, 735, 12), // "selectPreset"
QT_MOC_LITERAL(47, 748, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(48, 765, 5), // "color"
QT_MOC_LITERAL(49, 771, 7), // "opacity"
QT_MOC_LITERAL(50, 779, 7), // "ambient"
QT_MOC_LITERAL(51, 787, 7), // "diffuse"
QT_MOC_LITERAL(52, 795, 8), // "specular"
QT_MOC_LITERAL(53, 804, 13), // "specularPower"
QT_MOC_LITERAL(54, 818, 8), // "metallic"
QT_MOC_LITERAL(55, 827, 9), // "roughness"
QT_MOC_LITERAL(56, 837, 15), // "backfaceCulling"
QT_MOC_LITERAL(57, 853, 12), // "colorVisible"
QT_MOC_LITERAL(58, 866, 14), // "opacityVisible"
QT_MOC_LITERAL(59, 881, 22), // "backfaceCullingVisible"
QT_MOC_LITERAL(60, 904, 24), // "interpolationModeVisible"
QT_MOC_LITERAL(61, 929, 17), // "InterpolationFlat"
QT_MOC_LITERAL(62, 947, 20), // "InterpolationGouraud"
QT_MOC_LITERAL(63, 968, 18), // "InterpolationPhong"
QT_MOC_LITERAL(64, 987, 16) // "InterpolationPBR"

    },
    "ctkMaterialPropertyWidget\0colorChanged\0"
    "\0newColor\0opacityChanged\0newOpacity\0"
    "interpolationModeChanged\0interpolationMode\0"
    "ambientChanged\0newAmbient\0diffuseChanged\0"
    "newDiffuse\0specularChanged\0newSpecular\0"
    "specularPowerChanged\0newSpecularPower\0"
    "metallicChanged\0newMetallic\0"
    "roughnessChanged\0newRoughness\0"
    "backfaceCullingChanged\0newBackfaceCulling\0"
    "setColor\0setOpacity\0setInterpolationMode\0"
    "InterpolationMode\0setAmbient\0setDiffuse\0"
    "setSpecular\0setSpecularPower\0setMetallic\0"
    "setRoughness\0setBackfaceCulling\0enable\0"
    "onColorChanged\0onOpacityChanged\0"
    "onInterpolationModeChanged\0"
    "interpolationModeIndex\0onAmbientChanged\0"
    "onDiffuseChanged\0onSpecularChanged\0"
    "onSpecularPowerChanged\0onMetallicChanged\0"
    "onRoughnessChanged\0onBackfaceCullingChanged\0"
    "newBackFaceCulling\0selectPreset\0"
    "QListWidgetItem*\0color\0opacity\0ambient\0"
    "diffuse\0specular\0specularPower\0metallic\0"
    "roughness\0backfaceCulling\0colorVisible\0"
    "opacityVisible\0backfaceCullingVisible\0"
    "interpolationModeVisible\0InterpolationFlat\0"
    "InterpolationGouraud\0InterpolationPhong\0"
    "InterpolationPBR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkMaterialPropertyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      14,  262, // properties
       1,  304, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,
       4,    1,  172,    2, 0x06 /* Public */,
       6,    1,  175,    2, 0x06 /* Public */,
       8,    1,  178,    2, 0x06 /* Public */,
      10,    1,  181,    2, 0x06 /* Public */,
      12,    1,  184,    2, 0x06 /* Public */,
      14,    1,  187,    2, 0x06 /* Public */,
      16,    1,  190,    2, 0x06 /* Public */,
      18,    1,  193,    2, 0x06 /* Public */,
      20,    1,  196,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  199,    2, 0x0a /* Public */,
      23,    1,  202,    2, 0x0a /* Public */,
      24,    1,  205,    2, 0x0a /* Public */,
      26,    1,  208,    2, 0x0a /* Public */,
      27,    1,  211,    2, 0x0a /* Public */,
      28,    1,  214,    2, 0x0a /* Public */,
      29,    1,  217,    2, 0x0a /* Public */,
      30,    1,  220,    2, 0x0a /* Public */,
      31,    1,  223,    2, 0x0a /* Public */,
      32,    1,  226,    2, 0x0a /* Public */,
      34,    1,  229,    2, 0x09 /* Protected */,
      35,    1,  232,    2, 0x09 /* Protected */,
      36,    1,  235,    2, 0x09 /* Protected */,
      38,    1,  238,    2, 0x09 /* Protected */,
      39,    1,  241,    2, 0x09 /* Protected */,
      40,    1,  244,    2, 0x09 /* Protected */,
      41,    1,  247,    2, 0x09 /* Protected */,
      42,    1,  250,    2, 0x09 /* Protected */,
      43,    1,  253,    2, 0x09 /* Protected */,
      44,    1,  256,    2, 0x09 /* Protected */,
      46,    1,  259,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Bool,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 25,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, 0x80000000 | 47,    2,

 // properties: name, type, flags
      48, QMetaType::QColor, 0x00095103,
      49, QMetaType::Double, 0x00095103,
       7, 0x80000000 | 25, 0x0009510b,
      50, QMetaType::Double, 0x00095103,
      51, QMetaType::Double, 0x00095103,
      52, QMetaType::Double, 0x00095103,
      53, QMetaType::Double, 0x00095103,
      54, QMetaType::Double, 0x00095103,
      55, QMetaType::Double, 0x00095103,
      56, QMetaType::Bool, 0x00095103,
      57, QMetaType::Bool, 0x00095103,
      58, QMetaType::Bool, 0x00095103,
      59, QMetaType::Bool, 0x00095103,
      60, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,    4,  309,

 // enum data: key, value
      61, uint(ctkMaterialPropertyWidget::InterpolationFlat),
      62, uint(ctkMaterialPropertyWidget::InterpolationGouraud),
      63, uint(ctkMaterialPropertyWidget::InterpolationPhong),
      64, uint(ctkMaterialPropertyWidget::InterpolationPBR),

       0        // eod
};

void ctkMaterialPropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->opacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->interpolationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ambientChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->diffuseChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->specularChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->specularPowerChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->metallicChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->roughnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->backfaceCullingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->setOpacity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setInterpolationMode((*reinterpret_cast< InterpolationMode(*)>(_a[1]))); break;
        case 13: _t->setAmbient((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setDiffuse((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setSpecular((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setSpecularPower((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setMetallic((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setRoughness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setBackfaceCulling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->onColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 21: _t->onOpacityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->onInterpolationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->onAmbientChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->onDiffuseChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->onSpecularChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->onSpecularPowerChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->onMetallicChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->onRoughnessChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->onBackfaceCullingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->selectPreset((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkMaterialPropertyWidget::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::opacityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::interpolationModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::ambientChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::diffuseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::specularChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::specularPowerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::metallicChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::roughnessChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ctkMaterialPropertyWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkMaterialPropertyWidget::backfaceCullingChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->opacity(); break;
        case 2: *reinterpret_cast< InterpolationMode*>(_v) = _t->interpolationMode(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->ambient(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->diffuse(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->specular(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->specularPower(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->metallic(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->roughness(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->backfaceCulling(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isColorVisible(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isOpacityVisible(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isBackfaceCullingVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isInterpolationModeVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkMaterialPropertyWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setOpacity(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setInterpolationMode(*reinterpret_cast< InterpolationMode*>(_v)); break;
        case 3: _t->setAmbient(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setDiffuse(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setSpecular(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setSpecularPower(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setMetallic(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setRoughness(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setBackfaceCulling(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setColorVisible(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setOpacityVisible(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setBackfaceCullingVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setInterpolationModeVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkMaterialPropertyWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkMaterialPropertyWidget.data,
    qt_meta_data_ctkMaterialPropertyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkMaterialPropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkMaterialPropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkMaterialPropertyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkMaterialPropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkMaterialPropertyWidget::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkMaterialPropertyWidget::opacityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkMaterialPropertyWidget::interpolationModeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ctkMaterialPropertyWidget::ambientChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ctkMaterialPropertyWidget::diffuseChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ctkMaterialPropertyWidget::specularChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ctkMaterialPropertyWidget::specularPowerChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ctkMaterialPropertyWidget::metallicChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ctkMaterialPropertyWidget::roughnessChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ctkMaterialPropertyWidget::backfaceCullingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
