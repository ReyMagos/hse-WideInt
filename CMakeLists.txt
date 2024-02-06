cmake_minimum_required(VERSION 3.28)
project(WideInt)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fmodules")

include(cmake/Core.cmake)

as_library(WideInt)
target_sources(WideInt
    PUBLIC
    FILE_SET modules TYPE CXX_MODULES FILES modules/WideInt.cppm
)
with_test(WideInt gtest_main)

add_executable(WideIntCLI src/DevCLI.cpp)
target_link_libraries(WideIntCLI PRIVATE WideInt)

# Google tests
enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
#set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
