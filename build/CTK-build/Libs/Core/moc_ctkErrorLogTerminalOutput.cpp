/****************************************************************************
** Meta object code from reading C++ file 'ctkErrorLogTerminalOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkErrorLogTerminalOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkErrorLogTerminalOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkErrorLogTerminalOutput_t {
    QByteArrayData data[7];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkErrorLogTerminalOutput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkErrorLogTerminalOutput_t qt_meta_stringdata_ctkErrorLogTerminalOutput = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ctkErrorLogTerminalOutput"
QT_MOC_LITERAL(1, 26, 15), // "TerminalOutputs"
QT_MOC_LITERAL(2, 42, 14), // "TerminalOutput"
QT_MOC_LITERAL(3, 57, 4), // "None"
QT_MOC_LITERAL(4, 62, 13), // "StandardError"
QT_MOC_LITERAL(5, 76, 14), // "StandardOutput"
QT_MOC_LITERAL(6, 91, 3) // "All"

    },
    "ctkErrorLogTerminalOutput\0TerminalOutputs\0"
    "TerminalOutput\0None\0StandardError\0"
    "StandardOutput\0All"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkErrorLogTerminalOutput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    2, 0x1,    4,   19,

 // enum data: key, value
       3, uint(ctkErrorLogTerminalOutput::None),
       4, uint(ctkErrorLogTerminalOutput::StandardError),
       5, uint(ctkErrorLogTerminalOutput::StandardOutput),
       6, uint(ctkErrorLogTerminalOutput::All),

       0        // eod
};

void ctkErrorLogTerminalOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ctkErrorLogTerminalOutput::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkErrorLogTerminalOutput.data,
    qt_meta_data_ctkErrorLogTerminalOutput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkErrorLogTerminalOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkErrorLogTerminalOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkErrorLogTerminalOutput.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkErrorLogTerminalOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
