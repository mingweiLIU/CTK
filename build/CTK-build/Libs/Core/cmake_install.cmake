# Install script for directory: E:/OpenSource/CTK/Libs/Core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/CTK")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/OpenSource/CTK/build/CTK-build/bin/Debug/CTKCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/OpenSource/CTK/build/CTK-build/bin/Release/CTKCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/OpenSource/CTK/build/CTK-build/bin/MinSizeRel/CTKCore.lib")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE STATIC_LIBRARY OPTIONAL FILES "E:/OpenSource/CTK/build/CTK-build/bin/RelWithDebInfo/CTKCore.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xRuntimeLibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/OpenSource/CTK/build/CTK-build/bin/Debug/CTKCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/OpenSource/CTK/build/CTK-build/bin/Release/CTKCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/OpenSource/CTK/build/CTK-build/bin/MinSizeRel/CTKCore.dll")
  elseif("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/ctk-0.1" TYPE SHARED_LIBRARY FILES "E:/OpenSource/CTK/build/CTK-build/bin/RelWithDebInfo/CTKCore.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1" TYPE FILE FILES
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkBackTrace.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBinaryFileDescriptor.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBooleanMapper.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCallback.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCommandLineParser.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompatibility_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompilerDetections_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCorePythonQtDecorators.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreSettings.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingMacros.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkDependencyGraph.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractModel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogContext.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogLevel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogQtMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogStreamMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogTerminalOutput.h"
    "E:/OpenSource/CTK/Libs/Core/ctkException.h"
    "E:/OpenSource/CTK/Libs/Core/ctkFileLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkHighPrecisionTimer.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLinearValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkModelTester.h"
    "E:/OpenSource/CTK/Libs/Core/ctkPimpl.h"
    "E:/OpenSource/CTK/Libs/Core/ctkScopedCurrentDir.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSetName.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSingleton.h"
    "E:/OpenSource/CTK/Libs/Core/ctkUtils.h"
    "E:/OpenSource/CTK/Libs/Core/ctkValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowTransitions.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow_p.h"
    "E:/OpenSource/CTK/build/CTK-build/Libs/Core/ctkCoreExport.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1/CMake/TestBFD" TYPE FILE FILES
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkBackTrace.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBinaryFileDescriptor.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBooleanMapper.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCallback.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCommandLineParser.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompatibility_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompilerDetections_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCorePythonQtDecorators.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreSettings.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingMacros.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkDependencyGraph.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractModel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogContext.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogLevel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogQtMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogStreamMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogTerminalOutput.h"
    "E:/OpenSource/CTK/Libs/Core/ctkException.h"
    "E:/OpenSource/CTK/Libs/Core/ctkFileLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkHighPrecisionTimer.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLinearValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkModelTester.h"
    "E:/OpenSource/CTK/Libs/Core/ctkPimpl.h"
    "E:/OpenSource/CTK/Libs/Core/ctkScopedCurrentDir.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSetName.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSingleton.h"
    "E:/OpenSource/CTK/Libs/Core/ctkUtils.h"
    "E:/OpenSource/CTK/Libs/Core/ctkValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowTransitions.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow_p.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1/Documentation/Snippets" TYPE FILE FILES
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkBackTrace.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBinaryFileDescriptor.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBooleanMapper.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCallback.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCommandLineParser.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompatibility_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompilerDetections_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCorePythonQtDecorators.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreSettings.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingMacros.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkDependencyGraph.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractModel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogContext.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogLevel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogQtMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogStreamMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogTerminalOutput.h"
    "E:/OpenSource/CTK/Libs/Core/ctkException.h"
    "E:/OpenSource/CTK/Libs/Core/ctkFileLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkHighPrecisionTimer.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLinearValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkModelTester.h"
    "E:/OpenSource/CTK/Libs/Core/ctkPimpl.h"
    "E:/OpenSource/CTK/Libs/Core/ctkScopedCurrentDir.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSetName.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSingleton.h"
    "E:/OpenSource/CTK/Libs/Core/ctkUtils.h"
    "E:/OpenSource/CTK/Libs/Core/ctkValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowTransitions.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow_p.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xDevelopmentx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ctk-0.1/Testing/Cpp" TYPE FILE FILES
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractFileBasedFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractLibraryFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractPluginFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.h"
    "E:/OpenSource/CTK/Libs/Core/ctkAbstractQObjectFactory.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkBackTrace.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBinaryFileDescriptor.h"
    "E:/OpenSource/CTK/Libs/Core/ctkBooleanMapper.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCallback.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCommandLineParser.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompatibility_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCompilerDetections_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCorePythonQtDecorators.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreSettings.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingMacros.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.h"
    "E:/OpenSource/CTK/Libs/Core/ctkCoreTestingUtilities.tpp"
    "E:/OpenSource/CTK/Libs/Core/ctkDependencyGraph.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogAbstractModel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogContext.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogFDMessageHandler_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogLevel.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogQtMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogStreamMessageHandler.h"
    "E:/OpenSource/CTK/Libs/Core/ctkErrorLogTerminalOutput.h"
    "E:/OpenSource/CTK/Libs/Core/ctkException.h"
    "E:/OpenSource/CTK/Libs/Core/ctkFileLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkHighPrecisionTimer.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLinearValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkLogger.h"
    "E:/OpenSource/CTK/Libs/Core/ctkModelTester.h"
    "E:/OpenSource/CTK/Libs/Core/ctkPimpl.h"
    "E:/OpenSource/CTK/Libs/Core/ctkScopedCurrentDir.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSetName.h"
    "E:/OpenSource/CTK/Libs/Core/ctkSingleton.h"
    "E:/OpenSource/CTK/Libs/Core/ctkUtils.h"
    "E:/OpenSource/CTK/Libs/Core/ctkValueProxy.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowStep_p.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflowTransitions.h"
    "E:/OpenSource/CTK/Libs/Core/ctkWorkflow_p.h"
    )
endif()

