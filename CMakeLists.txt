cmake_minimum_required (VERSION 3.8)
project(Hello)

#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 20)

include(cmake/Core.cmake)

#add_custom_target(doc) # DEPENDS docProjA docProjB) Note: with CMake 3.X the DEPENDS would work

# Google tests
#enable_testing()
#
#include(FetchContent)
#FetchContent_Declare(
#        googletest
#        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
#)

# For Windows: Prevent overriding the parent project's compiler/linker settings
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
#FetchContent_MakeAvailable(googletest)

#as_library()
#with_test(Hello gtest_main)

add_executable(Hello src/WideInt.cxx include/WideInt.h)