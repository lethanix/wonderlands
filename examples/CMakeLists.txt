project(Inventory)

add_executable(ex_inventory Inventory.cpp)

target_link_libraries(ex_inventory
    PRIVATE
    Item
    )
