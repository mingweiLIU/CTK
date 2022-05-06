/****************************************************************************
** Meta object code from reading C++ file 'ctkFittedTextBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkFittedTextBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkFittedTextBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkFittedTextBrowser_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkFittedTextBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkFittedTextBrowser_t qt_meta_stringdata_ctkFittedTextBrowser = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ctkFittedTextBrowser"
QT_MOC_LITERAL(1, 21, 18), // "setCollapsibleText"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "text"
QT_MOC_LITERAL(4, 46, 18), // "setCollapsibleHtml"
QT_MOC_LITERAL(5, 65, 23), // "setCollapsiblePlainText"
QT_MOC_LITERAL(6, 89, 28), // "heightForWidthMayHaveChanged"
QT_MOC_LITERAL(7, 118, 13), // "anchorClicked"
QT_MOC_LITERAL(8, 132, 3), // "url"
QT_MOC_LITERAL(9, 136, 15), // "collapsibleText"
QT_MOC_LITERAL(10, 152, 9), // "collapsed"
QT_MOC_LITERAL(11, 162, 15), // "showDetailsText"
QT_MOC_LITERAL(12, 178, 15) // "hideDetailsText"

    },
    "ctkFittedTextBrowser\0setCollapsibleText\0"
    "\0text\0setCollapsibleHtml\0"
    "setCollapsiblePlainText\0"
    "heightForWidthMayHaveChanged\0anchorClicked\0"
    "url\0collapsibleText\0collapsed\0"
    "showDetailsText\0hideDetailsText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkFittedTextBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    1,   54,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   57,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,

       0        // eod
};

void ctkFittedTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ctkFittedTextBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCollapsibleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCollapsibleHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setCollapsiblePlainText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->heightForWidthMayHaveChanged(); break;
        case 4: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: { QString _r = _t->collapsibleText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ctkFittedTextBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->collapsed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->showDetailsText(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->hideDetailsText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ctkFittedTextBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCollapsed(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowDetailsText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setHideDetailsText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ctkFittedTextBrowser::staticMetaObject = { {
    &QTextBrowser::staticMetaObject,
    qt_meta_stringdata_ctkFittedTextBrowser.data,
    qt_meta_data_ctkFittedTextBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkFittedTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkFittedTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkFittedTextBrowser.stringdata0))
        return static_cast<void*>(this);
    return QTextBrowser::qt_metacast(_clname);
}

int ctkFittedTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
