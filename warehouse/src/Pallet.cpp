#include "include\Pallet.hpp"
#include <iostream>

Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount) : itemCount(itemCount), itemName(itemName), itemCapacity(itemCapacity){};

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
    if(itemName != "" or itemCapacity != 0){
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
    return true;
    }
    return false;
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

bool Pallet::isEmpty(){
    if (itemCount == 0 && itemName == "" && itemCapacity == 0){
        return true;
    }else{
        return false;
    }
}

bool Pallet::isFull(){
    if (this->getRemainingSpace() == 0 && itemName != "" && this->getItemCount() != 0){
        return true;
    }else{
        return false;
    }
}
