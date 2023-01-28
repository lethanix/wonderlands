project(Inventory)

# Using Google tests
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
    )

FetchContent_GetProperties(googletest)

if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    # Exclude to not install with the project
    add_subdirectory(${googletest_SOURCE_DIR}
        ${googletest_BINARY_DIR} EXCLUDE_FROM_ALL) 
endif()

enable_testing()

add_executable(tests
    item_test.cpp
    weapon_test.cpp
    gear_test.cpp
    )

target_link_libraries(
  tests
  GTest::gtest_main
)

include(GoogleTest)
