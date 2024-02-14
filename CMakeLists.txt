cmake_minimum_required(VERSION 3.28)
project(WideInt)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -fmodules")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fmodules -O2 -march=native")

add_definitions(-DBUILD_TYPE=${CMAKE_BUILD_TYPE})

file(GLOB SOURCES src/*.cpp)
add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_sources(${PROJECT_NAME}
    PUBLIC
    FILE_SET modules TYPE CXX_MODULES FILES modules/WideInt.cppm
)

file(GLOB TEST_SOURCES test/*.cpp)
add_executable(${PROJECT_NAME}-Test ${TEST_SOURCES})
target_link_libraries(${PROJECT_NAME}-Test ${PROJECT_NAME} gtest_main)

add_executable(WideInt-CLI src/dev/CLI.cpp)
target_link_libraries(WideInt-CLI PRIVATE ${PROJECT_NAME})

add_executable(WideInt-PI run/pi.cpp)
target_link_libraries(WideInt-PI PRIVATE ${PROJECT_NAME})

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
