#ifndef GEAR_H_
#define GEAR_H_

#include "Item.h"

class Gear : public Item {
   public:
    void setRarity(ItemRarity rarityType);
};

#endif
