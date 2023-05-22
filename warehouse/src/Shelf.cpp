#include "include\Shelf.hpp"
#include "include\Pallet.hpp"
#include <iostream>

Shelf::Shelf(){
    this->pallets = {Pallet(), Pallet(), Pallet(), Pallet()};
}

bool Shelf::swapPallet(int slot, int slot2){
    if(slot <= 4 && slot2 <= 4){
        std::swap(pallets[slot], pallets[slot2]);
        return true;
    }else{
        return false;
    }
}