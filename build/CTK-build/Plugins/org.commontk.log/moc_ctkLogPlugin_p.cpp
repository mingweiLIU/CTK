/****************************************************************************
** Meta object code from reading C++ file 'ctkLogPlugin_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctkLogPlugin_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctkLogPlugin_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ctkLogPlugin_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ctkLogPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ctkLogPlugin_t qt_meta_stringdata_ctkLogPlugin = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ctkLogPlugin"

    },
    "ctkLogPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ctkLogPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ctkLogPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ctkLogPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ctkLogPlugin.data,
    qt_meta_data_ctkLogPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ctkLogPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ctkLogPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ctkLogPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ctkPluginActivator"))
        return static_cast< ctkPluginActivator*>(this);
    if (!strcmp(_clname, "org.commontk.pluginfw.pluginactivator"))
        return static_cast< ctkPluginActivator*>(this);
    return QObject::qt_metacast(_clname);
}

int ctkLogPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x70,  'o',  'r',  'g',  '_',  'c',  'o', 
    'm',  'm',  'o',  'n',  't',  'k',  '_',  'l', 
    'o',  'g', 
    // "className"
    0x03,  0x6c,  'c',  't',  'k',  'L',  'o',  'g', 
    'P',  'l',  'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ctkLogPlugin, ctkLogPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
