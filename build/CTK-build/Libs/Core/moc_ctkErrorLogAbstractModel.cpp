/****************************************************************************
** Meta object code from reading C++ file 'ctkErrorLogAbstractModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkErrorLogAbstractModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkErrorLogAbstractModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkErrorLogAbstractModel_t {
    QByteArrayData data[25];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkErrorLogAbstractModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkErrorLogAbstractModel_t qt_meta_stringdata_ctkErrorLogAbstractModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ctkErrorLogAbstractModel"
QT_MOC_LITERAL(1, 25, 21), // "logLevelFilterChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 10), // "entryAdded"
QT_MOC_LITERAL(4, 59, 26), // "ctkErrorLogLevel::LogLevel"
QT_MOC_LITERAL(5, 86, 8), // "logLevel"
QT_MOC_LITERAL(6, 95, 5), // "clear"
QT_MOC_LITERAL(7, 101, 8), // "addEntry"
QT_MOC_LITERAL(8, 110, 15), // "currentDateTime"
QT_MOC_LITERAL(9, 126, 8), // "threadId"
QT_MOC_LITERAL(10, 135, 6), // "origin"
QT_MOC_LITERAL(11, 142, 18), // "ctkErrorLogContext"
QT_MOC_LITERAL(12, 161, 7), // "context"
QT_MOC_LITERAL(13, 169, 4), // "text"
QT_MOC_LITERAL(14, 174, 19), // "logEntryDescription"
QT_MOC_LITERAL(15, 194, 3), // "row"
QT_MOC_LITERAL(16, 198, 13), // "logEntryCount"
QT_MOC_LITERAL(17, 212, 16), // "logEntryGrouping"
QT_MOC_LITERAL(18, 229, 15), // "terminalOutputs"
QT_MOC_LITERAL(19, 245, 42), // "ctkErrorLogTerminalOutput::Te..."
QT_MOC_LITERAL(20, 288, 19), // "asynchronousLogging"
QT_MOC_LITERAL(21, 308, 8), // "filePath"
QT_MOC_LITERAL(22, 317, 19), // "numberOfFilesToKeep"
QT_MOC_LITERAL(23, 337, 18), // "fileLoggingEnabled"
QT_MOC_LITERAL(24, 356, 18) // "fileLoggingPattern"

    },
    "ctkErrorLogAbstractModel\0logLevelFilterChanged\0"
    "\0entryAdded\0ctkErrorLogLevel::LogLevel\0"
    "logLevel\0clear\0addEntry\0currentDateTime\0"
    "threadId\0origin\0ctkErrorLogContext\0"
    "context\0text\0logEntryDescription\0row\0"
    "logEntryCount\0logEntryGrouping\0"
    "terminalOutputs\0"
    "ctkErrorLogTerminalOutput::TerminalOutputs\0"
    "asynchronousLogging\0filePath\0"
    "numberOfFilesToKeep\0fileLoggingEnabled\0"
    "fileLoggingPattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkErrorLogAbstractModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x0a /* Public */,
       7,    6,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   62,    2, 0x02 /* Public */,
      16,    0,   65,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, 0x80000000 | 4, QMetaType::QString, 0x80000000 | 11, QMetaType::QString,    8,    9,    5,   10,   12,   13,

 // methods: parameters
    QMetaType::QString, QMetaType::Int,   15,
    QMetaType::Int,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095103,
      18, 0x80000000 | 19, 0x0009510b,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::QString, 0x00095103,
      22, QMetaType::Int, 0x00095103,
      23, QMetaType::Bool, 0x00095103,
      24, QMetaType::QString, 0x00095103,

       0        // eod
};

void ctkErrorLogAbstractModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkErrorLogAbstractModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logLevelFilterChanged(); break;
        case 1: _t->entryAdded((*reinterpret_cast< ctkErrorLogLevel::LogLevel(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->addEntry((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< ctkErrorLogLevel::LogLevel(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const ctkErrorLogContext(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 4: { QString _r = _t->logEntryDescription((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->logEntryCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkErrorLogAbstractModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkErrorLogAbstractModel::logLevelFilterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkErrorLogAbstractModel::*)(ctkErrorLogLevel::LogLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkErrorLogAbstractModel::entryAdded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkErrorLogAbstractModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->logEntryGrouping(); break;
        case 1: *reinterpret_cast< ctkErrorLogTerminalOutput::TerminalOutputs*>(_v) = _t->terminalOutputs(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->asynchronousLogging(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numberOfFilesToKeep(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->fileLoggingEnabled(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->fileLoggingPattern(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkErrorLogAbstractModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogEntryGrouping(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTerminalOutputs(*reinterpret_cast< ctkErrorLogTerminalOutput::TerminalOutputs*>(_v)); break;
        case 2: _t->setAsynchronousLogging(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFilePath(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setNumberOfFilesToKeep(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFileLoggingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFileLoggingPattern(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_ctkErrorLogAbstractModel[] = {
        &ctkErrorLogTerminalOutput::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ctkErrorLogAbstractModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_ctkErrorLogAbstractModel.data,
    qt_meta_data_ctkErrorLogAbstractModel,
    qt_static_metacall,
    qt_meta_extradata_ctkErrorLogAbstractModel,
    nullptr
} };


const QMetaObject *ctkErrorLogAbstractModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkErrorLogAbstractModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkErrorLogAbstractModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ctkErrorLogAbstractModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
void ctkErrorLogAbstractModel::logLevelFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ctkErrorLogAbstractModel::entryAdded(ctkErrorLogLevel::LogLevel _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
