/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.12.9
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // E:/OpenSource/CTK/build/CTK-build/Plugins/org.commontk.configadmin/MANIFEST.MF
  0x0,0x0,0x0,0x51,
  0x50,
  0x6c,0x75,0x67,0x69,0x6e,0x2d,0x53,0x79,0x6d,0x62,0x6f,0x6c,0x69,0x63,0x4e,0x61,
  0x6d,0x65,0x3a,0x20,0x6f,0x72,0x67,0x2e,0x63,0x6f,0x6d,0x6d,0x6f,0x6e,0x74,0x6b,
  0x2e,0x63,0x6f,0x6e,0x66,0x69,0x67,0x61,0x64,0x6d,0x69,0x6e,0xd,0xa,0x50,0x6c,
  0x75,0x67,0x69,0x6e,0x2d,0x41,0x63,0x74,0x69,0x76,0x61,0x74,0x69,0x6f,0x6e,0x50,
  0x6f,0x6c,0x69,0x63,0x79,0x3a,0x20,0x65,0x61,0x67,0x65,0x72,0xd,0xa,0xd,0xa,
  
  
};

static const unsigned char qt_resource_name[] = {
  // org.commontk.configadmin
  0x0,0x18,
  0xf,0x1f,0xc9,0x9e,
  0x0,0x6f,
  0x0,0x72,0x0,0x67,0x0,0x2e,0x0,0x63,0x0,0x6f,0x0,0x6d,0x0,0x6d,0x0,0x6f,0x0,0x6e,0x0,0x74,0x0,0x6b,0x0,0x2e,0x0,0x63,0x0,0x6f,0x0,0x6e,0x0,0x66,
  0x0,0x69,0x0,0x67,0x0,0x61,0x0,0x64,0x0,0x6d,0x0,0x69,0x0,0x6e,
    // META-INF
  0x0,0x8,
  0xa,0x84,0x18,0x6,
  0x0,0x4d,
  0x0,0x45,0x0,0x54,0x0,0x41,0x0,0x2d,0x0,0x49,0x0,0x4e,0x0,0x46,
    // MANIFEST.MF
  0x0,0xb,
  0xa,0xa,0xb6,0xb6,
  0x0,0x4d,
  0x0,0x41,0x0,0x4e,0x0,0x49,0x0,0x46,0x0,0x45,0x0,0x53,0x0,0x54,0x0,0x2e,0x0,0x4d,0x0,0x46,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/org.commontk.configadmin
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/org.commontk.configadmin/META-INF
  0x0,0x0,0x0,0x36,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/org.commontk.configadmin/META-INF/MANIFEST.MF
  0x0,0x0,0x0,0x4c,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x80,0x97,0x12,0x67,0xbb,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_org_commontk_configadmin_manifest)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_org_commontk_configadmin_manifest)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_org_commontk_configadmin_manifest)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_org_commontk_configadmin_manifest)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_org_commontk_configadmin_manifest)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_org_commontk_configadmin_manifest)(); }
   } dummy;
}
