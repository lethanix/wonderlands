cmake_minimum_required(VERSION 3.25)
project(Inventory)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(include)
add_subdirectory(src)

option(BUILD_TEST "Build library tests" ON)
option(BUILD_EXAMPLES "Build example executables" ON)

if (BUILD_TEST)
    message(STATUS "Building tests...")
    add_subdirectory(tests)
endif()

if (BUILD_EXAMPLES)
    message(STATUS "Building examples...")
    add_subdirectory(examples)
endif()

# Compile
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME}
    Item
    Weapon
    Gear)
