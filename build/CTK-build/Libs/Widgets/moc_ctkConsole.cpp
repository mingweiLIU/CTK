/****************************************************************************
** Meta object code from reading C++ file 'ctkConsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkConsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkConsole_t {
    QByteArrayData data[61];
    char stringdata0[809];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkConsole_t qt_meta_stringdata_ctkConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ctkConsole"
QT_MOC_LITERAL(1, 11, 14), // "aboutToExecute"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "executed"
QT_MOC_LITERAL(4, 36, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(5, 58, 5), // "clear"
QT_MOC_LITERAL(6, 64, 5), // "reset"
QT_MOC_LITERAL(7, 70, 16), // "setCommandBuffer"
QT_MOC_LITERAL(8, 87, 17), // "setCommandHistory"
QT_MOC_LITERAL(9, 105, 4), // "exec"
QT_MOC_LITERAL(10, 110, 7), // "runFile"
QT_MOC_LITERAL(11, 118, 8), // "filePath"
QT_MOC_LITERAL(12, 127, 9), // "printHelp"
QT_MOC_LITERAL(13, 137, 12), // "printMessage"
QT_MOC_LITERAL(14, 150, 7), // "message"
QT_MOC_LITERAL(15, 158, 5), // "color"
QT_MOC_LITERAL(16, 164, 18), // "printOutputMessage"
QT_MOC_LITERAL(17, 183, 4), // "text"
QT_MOC_LITERAL(18, 188, 17), // "printErrorMessage"
QT_MOC_LITERAL(19, 206, 9), // "getFormat"
QT_MOC_LITERAL(20, 216, 15), // "QTextCharFormat"
QT_MOC_LITERAL(21, 232, 9), // "setFormat"
QT_MOC_LITERAL(22, 242, 6), // "Format"
QT_MOC_LITERAL(23, 249, 9), // "shellFont"
QT_MOC_LITERAL(24, 259, 12), // "setShellFont"
QT_MOC_LITERAL(25, 272, 4), // "font"
QT_MOC_LITERAL(26, 277, 9), // "completer"
QT_MOC_LITERAL(27, 287, 20), // "ctkConsoleCompleter*"
QT_MOC_LITERAL(28, 308, 12), // "setCompleter"
QT_MOC_LITERAL(29, 321, 11), // "promptColor"
QT_MOC_LITERAL(30, 333, 15), // "outputTextColor"
QT_MOC_LITERAL(31, 349, 14), // "errorTextColor"
QT_MOC_LITERAL(32, 364, 14), // "stdinTextColor"
QT_MOC_LITERAL(33, 379, 16), // "commandTextColor"
QT_MOC_LITERAL(34, 396, 16), // "welcomeTextColor"
QT_MOC_LITERAL(35, 413, 15), // "backgroundColor"
QT_MOC_LITERAL(36, 429, 3), // "ps1"
QT_MOC_LITERAL(37, 433, 3), // "ps2"
QT_MOC_LITERAL(38, 437, 14), // "cursorPosition"
QT_MOC_LITERAL(39, 452, 12), // "cursorColumn"
QT_MOC_LITERAL(40, 465, 10), // "cursorLine"
QT_MOC_LITERAL(41, 476, 11), // "editorHints"
QT_MOC_LITERAL(42, 488, 11), // "EditorHints"
QT_MOC_LITERAL(43, 500, 15), // "scrollBarPolicy"
QT_MOC_LITERAL(44, 516, 19), // "Qt::ScrollBarPolicy"
QT_MOC_LITERAL(45, 536, 18), // "completerShortcuts"
QT_MOC_LITERAL(46, 555, 19), // "QList<QKeySequence>"
QT_MOC_LITERAL(47, 575, 14), // "runFileOptions"
QT_MOC_LITERAL(48, 590, 14), // "RunFileOptions"
QT_MOC_LITERAL(49, 605, 24), // "maxVisibleCompleterItems"
QT_MOC_LITERAL(50, 630, 13), // "commandBuffer"
QT_MOC_LITERAL(51, 644, 14), // "commandHistory"
QT_MOC_LITERAL(52, 659, 10), // "EditorHint"
QT_MOC_LITERAL(53, 670, 7), // "NoHints"
QT_MOC_LITERAL(54, 678, 20), // "AutomaticIndentation"
QT_MOC_LITERAL(55, 699, 20), // "RemoveTrailingSpaces"
QT_MOC_LITERAL(56, 720, 21), // "SplitCopiedTextByLine"
QT_MOC_LITERAL(57, 742, 13), // "RunFileOption"
QT_MOC_LITERAL(58, 756, 22), // "NoRunFileUserInterface"
QT_MOC_LITERAL(59, 779, 13), // "RunFileButton"
QT_MOC_LITERAL(60, 793, 15) // "RunFileShortcut"

    },
    "ctkConsole\0aboutToExecute\0\0executed\0"
    "cursorPositionChanged\0clear\0reset\0"
    "setCommandBuffer\0setCommandHistory\0"
    "exec\0runFile\0filePath\0printHelp\0"
    "printMessage\0message\0color\0"
    "printOutputMessage\0text\0printErrorMessage\0"
    "getFormat\0QTextCharFormat\0setFormat\0"
    "Format\0shellFont\0setShellFont\0font\0"
    "completer\0ctkConsoleCompleter*\0"
    "setCompleter\0promptColor\0outputTextColor\0"
    "errorTextColor\0stdinTextColor\0"
    "commandTextColor\0welcomeTextColor\0"
    "backgroundColor\0ps1\0ps2\0cursorPosition\0"
    "cursorColumn\0cursorLine\0editorHints\0"
    "EditorHints\0scrollBarPolicy\0"
    "Qt::ScrollBarPolicy\0completerShortcuts\0"
    "QList<QKeySequence>\0runFileOptions\0"
    "RunFileOptions\0maxVisibleCompleterItems\0"
    "commandBuffer\0commandHistory\0EditorHint\0"
    "NoHints\0AutomaticIndentation\0"
    "RemoveTrailingSpaces\0SplitCopiedTextByLine\0"
    "RunFileOption\0NoRunFileUserInterface\0"
    "RunFileButton\0RunFileShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkConsole[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
      19,  160, // properties
       4,  217, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       4,    0,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  121,    2, 0x0a /* Public */,
       6,    0,  122,    2, 0x0a /* Public */,
       7,    1,  123,    2, 0x0a /* Public */,
       8,    1,  126,    2, 0x0a /* Public */,
       9,    1,  129,    2, 0x0a /* Public */,
      10,    1,  132,    2, 0x0a /* Public */,
      10,    0,  135,    2, 0x0a /* Public */,
      12,    0,  136,    2, 0x0a /* Public */,
      13,    2,  137,    2, 0x0a /* Public */,
      16,    1,  142,    2, 0x0a /* Public */,
      18,    1,  145,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    0,  148,    2, 0x02 /* Public */,
      21,    1,  149,    2, 0x02 /* Public */,
      23,    0,  152,    2, 0x02 /* Public */,
      24,    1,  153,    2, 0x02 /* Public */,
      26,    0,  156,    2, 0x02 /* Public */,
      28,    1,  157,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,

 // methods: parameters
    0x80000000 | 20,
    QMetaType::Void, 0x80000000 | 20,   22,
    QMetaType::QFont,
    QMetaType::Void, QMetaType::QFont,   25,
    0x80000000 | 27,
    QMetaType::Void, 0x80000000 | 27,   26,

 // properties: name, type, flags
      29, QMetaType::QColor, 0x00095103,
      30, QMetaType::QColor, 0x00095103,
      31, QMetaType::QColor, 0x00095103,
      32, QMetaType::QColor, 0x00095103,
      33, QMetaType::QColor, 0x00095103,
      34, QMetaType::QColor, 0x00095103,
      35, QMetaType::QColor, 0x00095103,
      36, QMetaType::QString, 0x00095103,
      37, QMetaType::QString, 0x00095103,
      38, QMetaType::Int, 0x00095001,
      39, QMetaType::Int, 0x00095001,
      40, QMetaType::Int, 0x00095001,
      41, 0x80000000 | 42, 0x0009510b,
      43, 0x80000000 | 44, 0x0009510b,
      45, 0x80000000 | 46, 0x0009510b,
      47, 0x80000000 | 48, 0x0009510b,
      49, QMetaType::Int, 0x00095103,
      50, QMetaType::QString, 0x00095103,
      51, QMetaType::QStringList, 0x00095103,

 // enums: name, alias, flags, count, data
      52,   52, 0x1,    4,  237,
      42,   52, 0x1,    4,  245,
      57,   57, 0x1,    3,  253,
      48,   57, 0x1,    3,  259,

 // enum data: key, value
      53, uint(ctkConsole::NoHints),
      54, uint(ctkConsole::AutomaticIndentation),
      55, uint(ctkConsole::RemoveTrailingSpaces),
      56, uint(ctkConsole::SplitCopiedTextByLine),
      53, uint(ctkConsole::NoHints),
      54, uint(ctkConsole::AutomaticIndentation),
      55, uint(ctkConsole::RemoveTrailingSpaces),
      56, uint(ctkConsole::SplitCopiedTextByLine),
      58, uint(ctkConsole::NoRunFileUserInterface),
      59, uint(ctkConsole::RunFileButton),
      60, uint(ctkConsole::RunFileShortcut),
      58, uint(ctkConsole::NoRunFileUserInterface),
      59, uint(ctkConsole::RunFileButton),
      60, uint(ctkConsole::RunFileShortcut),

       0        // eod
};

void ctkConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToExecute((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->executed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->cursorPositionChanged(); break;
        case 3: _t->clear(); break;
        case 4: _t->reset(); break;
        case 5: _t->setCommandBuffer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setCommandHistory((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->exec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->runFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->runFile(); break;
        case 10: _t->printHelp(); break;
        case 11: _t->printMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 12: _t->printOutputMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->printErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: { QTextCharFormat _r = _t->getFormat();
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setFormat((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 16: { QFont _r = _t->shellFont();
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->setShellFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 18: { ctkConsoleCompleter* _r = _t->completer();
            if (_a[0]) *reinterpret_cast< ctkConsoleCompleter**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setCompleter((*reinterpret_cast< ctkConsoleCompleter*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ctkConsole::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkConsole::aboutToExecute)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ctkConsole::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkConsole::executed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ctkConsole::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ctkConsole::cursorPositionChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QKeySequence> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkConsole *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->promptColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->outputTextColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->errorTextColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->stdinTextColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->commandTextColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->welcomeTextColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->ps1(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->ps2(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->cursorPosition(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->cursorColumn(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->cursorLine(); break;
        case 12: *reinterpret_cast<int*>(_v) = QFlag(_t->editorHints()); break;
        case 13: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = _t->scrollBarPolicy(); break;
        case 14: *reinterpret_cast< QList<QKeySequence>*>(_v) = _t->completerShortcuts(); break;
        case 15: *reinterpret_cast<int*>(_v) = QFlag(_t->runFileOptions()); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->maxVisibleCompleterItems(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->commandBuffer(); break;
        case 18: *reinterpret_cast< QStringList*>(_v) = _t->commandHistory(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkConsole *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPromptColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setOutputTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setErrorTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setStdinTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setCommandTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setWelcomeTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setPs1(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setPs2(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setEditorHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 13: _t->setScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 14: _t->setCompleterShortcuts(*reinterpret_cast< QList<QKeySequence>*>(_v)); break;
        case 15: _t->setRunFileOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 16: _t->setMaxVisibleCompleterItems(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setCommandBuffer(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setCommandHistory(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkConsole::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ctkConsole.data,
    qt_meta_data_ctkConsole,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkConsole.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ctkConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ctkConsole::aboutToExecute(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ctkConsole::executed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ctkConsole::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
