cmake_minimum_required (VERSION 3.0)

#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
include(BuildConfiguration/GeneralConf.cmake)


add_subdirectory(potato-gl)
add_subdirectory(thirdparty)
#add_subdirectory(example)
