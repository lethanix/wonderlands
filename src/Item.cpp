#include "Item.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

//**************************************************
//* Getters
string Item::getRarity() {
    string rarityString{};
    switch (this->rarity) {
        case Common:
            rarityString = "Common";
            break;
        case Uncommon:
            rarityString = "Uncommon";
            break;
        case Rare:
            rarityString = "Rare";
            break;
        case Legendary:
            rarityString = "Legendary";
            break;
        default:
            // TODO: Error handling
            cout << "ItemRarity not defined" << endl;
            std::exit(-1);
    }
    return rarityString;
}

//**************************************************
//* Functions
void Item::show() { cout << "Item created: " << getRarity() << endl; }

//* Setters
// void Item::setRarity(ItemRarity rarityType) {
//     cout << "Changing rarity" << endl;
//     this->rarity = rarityType;
// }
