#include "Gear.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Gear::setRarity(ItemRarity rarityType) {
    cout << "Changing rarity" << endl;
    this->rarity = rarityType;
}
