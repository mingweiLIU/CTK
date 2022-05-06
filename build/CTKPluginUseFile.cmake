# List all plugins
set(CTK_PLUGIN_LIBRARIES org_commontk_configadmin;org_commontk_eventadmin;org_commontk_log;org_commontk_metatype)

if(NOT CTK_PLUGIN_LIBRARIES_set)
  set_property(GLOBAL APPEND PROPERTY CTK_PLUGIN_LIBRARIES_VARS CTK_PLUGIN_LIBRARIES)
  set(CTK_PLUGIN_LIBRARIES_set 1)
endif()

# Plugin specific include directories

set(org_commontk_configadmin_INCLUDE_DIRS "E:/OpenSource/CTK/Plugins/org.commontk.configadmin;E:/OpenSource/CTK/build/CTK-build/Plugins/org.commontk.configadmin;E:/OpenSource/CTK/build/CTK-build;E:/OpenSource/CTK/Libs/PluginFramework;E:/OpenSource/CTK/build/CTK-build/Libs/PluginFramework;E:/OpenSource/CTK/Libs/Core;E:/OpenSource/CTK/build/CTK-build/Libs/Core")
set(org_commontk_eventadmin_INCLUDE_DIRS "E:/OpenSource/CTK/Plugins/org.commontk.eventadmin;E:/OpenSource/CTK/build/CTK-build/Plugins/org.commontk.eventadmin;E:/OpenSource/CTK/build/CTK-build;E:/OpenSource/CTK/Libs/PluginFramework;E:/OpenSource/CTK/build/CTK-build/Libs/PluginFramework;E:/OpenSource/CTK/Libs/Core;E:/OpenSource/CTK/build/CTK-build/Libs/Core")
set(org_commontk_log_INCLUDE_DIRS "E:/OpenSource/CTK/Plugins/org.commontk.log;E:/OpenSource/CTK/build/CTK-build/Plugins/org.commontk.log;E:/OpenSource/CTK/build/CTK-build;E:/OpenSource/CTK/Libs/PluginFramework;E:/OpenSource/CTK/build/CTK-build/Libs/PluginFramework;E:/OpenSource/CTK/Libs/Core;E:/OpenSource/CTK/build/CTK-build/Libs/Core")
set(org_commontk_metatype_INCLUDE_DIRS "E:/OpenSource/CTK/Plugins/org.commontk.metatype;E:/OpenSource/CTK/build/CTK-build/Plugins/org.commontk.metatype;E:/OpenSource/CTK/build/CTK-build;E:/OpenSource/CTK/Libs/PluginFramework;E:/OpenSource/CTK/build/CTK-build/Libs/PluginFramework;E:/OpenSource/CTK/Libs/Core;E:/OpenSource/CTK/build/CTK-build/Libs/Core")

# Plugin specific library directories

set(org_commontk_configadmin_LIBRARY_DIRS "")
set(org_commontk_eventadmin_LIBRARY_DIRS "")
set(org_commontk_log_LIBRARY_DIRS "")
set(org_commontk_metatype_LIBRARY_DIRS "")
