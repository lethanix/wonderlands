#ifndef ITEM_H
#define ITEM_H

#include <string>

// Abstract class with the necessary properties for all
// kind of item available
class Item {
    //**************************************************
    // Useful enumeration to describe properties
   public:
    enum ItemRarity {
        Common,
        Uncommon,
        Rare,
        Legendary,
    };

    enum ItemType {
        Weapon,
        Gear,
    };

    enum ItemManufacturer {
        Dahlia,
        Blackpowder,
        Feriore,
        Stoker,
        Torgue,
        Skuldugger,
        Hyperius,
    };

    //**************************************************
    //* Properties
    std::string name;
    ItemType rarityType;
    ItemRarity rarity;
    ItemManufacturer manufacturer;

    //**************************************************
    //* Functions
    virtual void show();

    //* Setters
    virtual void setRarity(ItemRarity rarityType) = 0;

    //* Getters
    virtual std::string getRarity();
};

#endif
