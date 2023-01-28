#define BACKPACK_SIZE 24
#include <SDL2/SDL.h>

#include <iostream>
#include <string>

#include "Gear.h"
#include "Weapon.h"

// using std::cout;
// using std::endl;

int main() {
    Item* weapon = new Weapon();
    Item* gear = new Gear();

    weapon->setRarity(Item::Rare);
    gear->setRarity(Item::Uncommon);

    Item* slots[BACKPACK_SIZE]{weapon, gear};

    for (int i{0}; i < 2; i++) {
        slots[i]->show();
    }

    return 0;
}
