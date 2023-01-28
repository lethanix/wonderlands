#ifndef WEAPON_H_
#define WEAPON_H_

#include "Item.h"


class Weapon : public Item {
   public:
    void setRarity(ItemRarity rarityType);
};

#endif
