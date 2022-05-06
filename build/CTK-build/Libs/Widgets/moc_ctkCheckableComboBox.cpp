/****************************************************************************
** Meta object code from reading C++ file 'ctkCheckableComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkCheckableComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkCheckableComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkCheckableComboBox_t {
    QByteArrayData data[22];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkCheckableComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkCheckableComboBox_t qt_meta_stringdata_ctkCheckableComboBox = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkCheckableComboBox"
QT_MOC_LITERAL(1, 21, 21), // "checkedIndexesChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "onDataChanged"
QT_MOC_LITERAL(4, 58, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 70, 7), // "topLeft"
QT_MOC_LITERAL(6, 78, 11), // "bottomRight"
QT_MOC_LITERAL(7, 90, 14), // "checkableModel"
QT_MOC_LITERAL(8, 105, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(9, 125, 17), // "setCheckableModel"
QT_MOC_LITERAL(10, 143, 5), // "model"
QT_MOC_LITERAL(11, 149, 14), // "checkedIndexes"
QT_MOC_LITERAL(12, 164, 15), // "QModelIndexList"
QT_MOC_LITERAL(13, 180, 10), // "allChecked"
QT_MOC_LITERAL(14, 191, 11), // "noneChecked"
QT_MOC_LITERAL(15, 203, 13), // "setCheckState"
QT_MOC_LITERAL(16, 217, 5), // "index"
QT_MOC_LITERAL(17, 223, 14), // "Qt::CheckState"
QT_MOC_LITERAL(18, 238, 5), // "check"
QT_MOC_LITERAL(19, 244, 10), // "checkState"
QT_MOC_LITERAL(20, 255, 20), // "checkableModelHelper"
QT_MOC_LITERAL(21, 276, 24) // "ctkCheckableModelHelper*"

    },
    "ctkCheckableComboBox\0checkedIndexesChanged\0"
    "\0onDataChanged\0QModelIndex\0topLeft\0"
    "bottomRight\0checkableModel\0"
    "QAbstractItemModel*\0setCheckableModel\0"
    "model\0checkedIndexes\0QModelIndexList\0"
    "allChecked\0noneChecked\0setCheckState\0"
    "index\0Qt::CheckState\0check\0checkState\0"
    "checkableModelHelper\0ctkCheckableModelHelper*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkCheckableComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   65,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x02 /* Public */,
       9,    1,   71,    2, 0x02 /* Public */,
      11,    0,   74,    2, 0x02 /* Public */,
      13,    0,   75,    2, 0x02 /* Public */,
      14,    0,   76,    2, 0x02 /* Public */,
      15,    2,   77,    2, 0x02 /* Public */,
      19,    1,   82,    2, 0x02 /* Public */,
      20,    0,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,

 // methods: parameters
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   10,
    0x80000000 | 12,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 17,   16,   18,
    0x80000000 | 17, 0x80000000 | 4,   16,
    0x80000000 | 21,

       0        // eod
};

void ctkCheckableComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkCheckableComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkedIndexesChanged(); break;
        case 1: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: { QAbstractItemModel* _r = _t->checkableModel();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setCheckableModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 4: { QModelIndexList _r = _t->checkedIndexes();
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->allChecked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->noneChecked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setCheckState((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 8: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = std::move(_r); }  break;
        case 9: { ctkCheckableModelHelper* _r = _t->checkableModelHelper();
            if (_a[0]) *reinterpret_cast< ctkCheckableModelHelper**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkCheckableComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkCheckableComboBox::checkedIndexesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ctkCheckableComboBox::staticMetaObject = { {
    &QComboBox::staticMetaObject,
    qt_meta_stringdata_ctkCheckableComboBox.data,
    qt_meta_data_ctkCheckableComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkCheckableComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkCheckableComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkCheckableComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int ctkCheckableComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ctkCheckableComboBox::checkedIndexesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
