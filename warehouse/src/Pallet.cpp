#include "include\Pallet.hpp"
#include <iostream>

// Variabelen om een pallet aan te maken
Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount) : itemCount(itemCount), itemName(itemName), itemCapacity(itemCapacity){};

// Maak een lege pallet aan
Pallet::Pallet(){
    itemCount = 0;
    itemName = "";
    itemCapacity = 0;
}

// Return de naam van het item op de pallet
std::string Pallet::getItemName(){
    return itemName;
}

// Return het aantal van het item op de pallet
int Pallet::getItemCount(){
    return itemCount;
}

// Return de overige ruimte op een pallet
int Pallet::getRemainingSpace(){
    return itemCapacity - itemCount;
}

// Geef waarde aan een lege pallet
bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    if(itemName != "" or itemCapacity != 0){
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }
    return false;
}

// Haal 1 item uit de pallet
bool Pallet::takeOne(){
    if(itemCount > 0){
        this->itemCount -= 1;
        this-> itemCapacity += 1;
        return true;
    }else{
        return false;
    }
}

// Doe 1 item op de pallet
bool Pallet::putOne(){
    if(itemCount < 4){
        this->itemCount += 1;
        return true;
    }else{
        return false;
    }
}

// Kijk of de pallet leeg is
bool Pallet::isEmpty(){
    if (itemCount == 0 && itemName == "" && itemCapacity == 0){
        return true;
    }else{
        return false;
    }
}

// Kijk of de pallet vol is
bool Pallet::isFull(){
    if (this->getRemainingSpace() == 0 && itemName != "" && this->getItemCount() != 0){
        return true;
    }else{
        return false;
    }
}
