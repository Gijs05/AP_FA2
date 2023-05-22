#include "include\Pallet.hpp"
#include <iostream>

Pallet::Pallet(int itemCount, std::string itemName, int itemCapacity) : itemCount(itemCount), itemName(itemName), itemCapacity(itemCapacity){};

Pallet::Pallet(){
    itemCount = 0;
    itemName = "";
    itemCapacity = 0;
}

std::string Pallet::getItemName(){
    return itemName;
}

int Pallet::getItemCount(){
    return itemCount;
}

int Pallet::getRemainingSpace(){
    return itemCapacity - itemCount;
}

bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    itemName = this->itemName;
    itemCapacity = this->itemCapacity;
}

bool Pallet::takeOne(){
    if(itemCount > 0){
    this->itemCount -= 1;
    return true;
    }else{
        return false;
    }
}

bool Pallet::putOne(){
    if(itemCount < 4){
    this->itemCount += 1;
    return true;
    }else{
        return false;
    }
}