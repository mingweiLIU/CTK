/****************************************************************************
** Meta object code from reading C++ file 'ctkPathListButtonsWidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkPathListButtonsWidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkPathListButtonsWidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkPathListButtonsWidgetPrivate_t {
    QByteArrayData data[10];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkPathListButtonsWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkPathListButtonsWidgetPrivate_t qt_meta_stringdata_ctkPathListButtonsWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 31), // "ctkPathListButtonsWidgetPrivate"
QT_MOC_LITERAL(1, 32, 25), // "on_AddFilesButton_clicked"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 23), // "on_AddDirButton_clicked"
QT_MOC_LITERAL(4, 83, 23), // "on_RemoveButton_clicked"
QT_MOC_LITERAL(5, 107, 21), // "on_EditButton_clicked"
QT_MOC_LITERAL(6, 129, 34), // "on_PathListWidget_selectionCh..."
QT_MOC_LITERAL(7, 164, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 179, 8), // "selected"
QT_MOC_LITERAL(9, 188, 10) // "deselected"

    },
    "ctkPathListButtonsWidgetPrivate\0"
    "on_AddFilesButton_clicked\0\0"
    "on_AddDirButton_clicked\0on_RemoveButton_clicked\0"
    "on_EditButton_clicked\0"
    "on_PathListWidget_selectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkPathListButtonsWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    2,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,

       0        // eod
};

void ctkPathListButtonsWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkPathListButtonsWidgetPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddFilesButton_clicked(); break;
        case 1: _t->on_AddDirButton_clicked(); break;
        case 2: _t->on_RemoveButton_clicked(); break;
        case 3: _t->on_EditButton_clicked(); break;
        case 4: _t->on_PathListWidget_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkPathListButtonsWidgetPrivate::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkPathListButtonsWidgetPrivate.data,
    qt_meta_data_ctkPathListButtonsWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkPathListButtonsWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkPathListButtonsWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkPathListButtonsWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_ctkPathListButtonsWidget"))
        return static_cast< Ui_ctkPathListButtonsWidget*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkPathListButtonsWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
