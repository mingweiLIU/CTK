/****************************************************************************
** Meta object code from reading C++ file 'ctkSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkSettings_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkSettings_t qt_meta_stringdata_ctkSettings = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ctkSettings"
QT_MOC_LITERAL(1, 12, 8), // "modified"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "saveState"
QT_MOC_LITERAL(4, 32, 11), // "QMainWindow"
QT_MOC_LITERAL(5, 44, 6), // "window"
QT_MOC_LITERAL(6, 51, 3), // "key"
QT_MOC_LITERAL(7, 55, 7), // "QDialog"
QT_MOC_LITERAL(8, 63, 6), // "dialog"
QT_MOC_LITERAL(9, 70, 12), // "restoreState"
QT_MOC_LITERAL(10, 83, 12), // "QMainWindow&"
QT_MOC_LITERAL(11, 96, 8), // "QDialog&"
QT_MOC_LITERAL(12, 105, 21) // "alertSettingsModified"

    },
    "ctkSettings\0modified\0\0saveState\0"
    "QMainWindow\0window\0key\0QDialog\0dialog\0"
    "restoreState\0QMainWindow&\0QDialog&\0"
    "alertSettingsModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   45,    2, 0x02 /* Public */,
       3,    2,   50,    2, 0x02 /* Public */,
       9,    2,   55,    2, 0x02 /* Public */,
       9,    2,   60,    2, 0x02 /* Public */,
      12,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    6,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    6,    8,
    QMetaType::Void,

       0        // eod
};

void ctkSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modified(); break;
        case 1: _t->saveState((*reinterpret_cast< const QMainWindow(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->saveState((*reinterpret_cast< const QDialog(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->restoreState((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QMainWindow(*)>(_a[2]))); break;
        case 4: _t->restoreState((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDialog(*)>(_a[2]))); break;
        case 5: _t->alertSettingsModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkSettings::modified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkSettings::staticMetaObject = { {
    &ctkCoreSettings::staticMetaObject,
    qt_meta_stringdata_ctkSettings.data,
    qt_meta_data_ctkSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkSettings.stringdata0))
        return static_cast<void*>(this);
    return ctkCoreSettings::qt_metacast(_clname);
}

int ctkSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ctkCoreSettings::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ctkSettings::modified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
