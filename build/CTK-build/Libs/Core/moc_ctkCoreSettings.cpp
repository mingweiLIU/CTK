/****************************************************************************
** Meta object code from reading C++ file 'ctkCoreSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCoreSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCoreSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkCoreSettings_t {
    QByteArrayData data[18];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCoreSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCoreSettings_t qt_meta_stringdata_ctkCoreSettings = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ctkCoreSettings"
QT_MOC_LITERAL(1, 16, 27), // "setApplicationHomeDirectory"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 3), // "dir"
QT_MOC_LITERAL(4, 49, 29), // "setApplicationHomePlaceholder"
QT_MOC_LITERAL(5, 79, 12), // "setPathValue"
QT_MOC_LITERAL(6, 92, 3), // "key"
QT_MOC_LITERAL(7, 96, 5), // "value"
QT_MOC_LITERAL(8, 102, 9), // "pathValue"
QT_MOC_LITERAL(9, 112, 12), // "defaultValue"
QT_MOC_LITERAL(10, 125, 29), // "toApplicationHomeAbsolutePath"
QT_MOC_LITERAL(11, 155, 4), // "path"
QT_MOC_LITERAL(12, 160, 29), // "toApplicationHomeRelativePath"
QT_MOC_LITERAL(13, 190, 30), // "toApplicationHomeAbsolutePaths"
QT_MOC_LITERAL(14, 221, 5), // "paths"
QT_MOC_LITERAL(15, 227, 30), // "toApplicationHomeRelativePaths"
QT_MOC_LITERAL(16, 258, 24), // "applicationHomeDirectory"
QT_MOC_LITERAL(17, 283, 26) // "applicationHomePlaceholder"

    },
    "ctkCoreSettings\0setApplicationHomeDirectory\0"
    "\0dir\0setApplicationHomePlaceholder\0"
    "setPathValue\0key\0value\0pathValue\0"
    "defaultValue\0toApplicationHomeAbsolutePath\0"
    "path\0toApplicationHomeRelativePath\0"
    "toApplicationHomeAbsolutePaths\0paths\0"
    "toApplicationHomeRelativePaths\0"
    "applicationHomeDirectory\0"
    "applicationHomePlaceholder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCoreSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   65,    2, 0x02 /* Public */,
       8,    2,   70,    2, 0x02 /* Public */,
       8,    1,   75,    2, 0x22 /* Public | MethodCloned */,
      10,    1,   78,    2, 0x02 /* Public */,
      12,    1,   81,    2, 0x02 /* Public */,
      13,    1,   84,    2, 0x02 /* Public */,
      15,    1,   87,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    6,    7,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,    6,    9,
    QMetaType::QVariant, QMetaType::QString,    6,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::QString, QMetaType::QString,   11,
    QMetaType::QStringList, QMetaType::QStringList,   14,
    QMetaType::QStringList, QMetaType::QStringList,   14,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00095103,

       0        // eod
};

void ctkCoreSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkCoreSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setApplicationHomeDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setApplicationHomePlaceholder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setPathValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: { QVariant _r = _t->pathValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->pathValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->toApplicationHomeAbsolutePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->toApplicationHomeRelativePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QStringList _r = _t->toApplicationHomeAbsolutePaths((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->toApplicationHomeRelativePaths((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkCoreSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->applicationHomeDirectory(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationHomePlaceholder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkCoreSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setApplicationHomeDirectory(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setApplicationHomePlaceholder(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkCoreSettings::staticMetaObject = { {
    &QSettings::staticMetaObject,
    qt_meta_stringdata_ctkCoreSettings.data,
    qt_meta_data_ctkCoreSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkCoreSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCoreSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCoreSettings.stringdata0))
        return static_cast<void*>(this);
    return QSettings::qt_metacast(_clname);
}

int ctkCoreSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSettings::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
