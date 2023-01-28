project(Inventory)

add_library(Item Item.cpp)
add_library(Weapon Weapon.cpp)
add_library(Gear Gear.cpp)

target_include_directories(Item
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    )

target_include_directories(Weapon
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    )

target_include_directories(Gear
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    )
