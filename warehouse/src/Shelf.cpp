#include "include\Shelf.hpp"
#include <iostream>

Shelf::Shelf(){
    this->pallets = {Pallet(), Pallet(), Pallet(), Pallet()};
}

bool Shelf::swapPallet(int slot, int slot2){
    if(slot <= 4 && slot2 <= 4){
        Pallet pal = pallets[slot];
        pallets[slot] = pallets[slot2];
        pallets[slot2] = pal;
        return true;
    }else{
        return false;
    }
}

bool Shelf::isEmpty(){
    for(Pallet pal : pallets){
        if (pal.getRemainingSpace() != 0 && pal.getItemName() == "" && pal.getItemCount() != 0){
            return true;
        }
    }
    return false; 
}

bool Shelf::isFull(){
    for(Pallet pal : pallets){
        if (pal.getRemainingSpace() == 0 && pal.getItemName() != "" && pal.getItemCount() == 0){
            return true;
        }
    }
    return false;
}