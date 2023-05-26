#include "include\Warehouse.hpp"
#include <iostream>

Warehouse::Warehouse(){
    this->shelves = {};
    this->Employees = {};
}

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
}

void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
}

bool Warehouse::rearrangeShelf(Shelf& shelf){
    for(Employee& employee : Employees){
        if(employee.getBusy() == false && employee.getForkliftCertificate() == true){
            employee.setBusy(true);
            for(int i = 0; i < 3; i++){
                for(int indx = 0; indx < 3; indx++){
                    if(shelf.pallets[indx].getItemCount() > shelf.pallets[indx + 1].getItemCount()){
                        shelf.swapPallet(indx + 1, indx);
                    }
                }
            }
        return true;
        }
    }
    return false;
}


bool Warehouse::pickItems(std::string itemName, int itemCount){
    int items = 0;
    for(Shelf& sh : shelves){
        for(Pallet& pal : sh.pallets){
            if(pal.getItemName() == itemName){
                items += pal.getItemCount();
            }
        }
    }
    
    for(Shelf& sh : shelves){
        for(Pallet& pal : sh.pallets){
            if(pal.getItemName() == itemName){
                if(itemCount - pal.getItemCount() >= 0){
                    itemCount -= pal.getItemCount();
                    pal = Pallet();
                }else{
                    int new_itemCount = pal.getItemCount() - itemCount;
                    int space = pal.getRemainingSpace() + new_itemCount;
                    itemCount = 0;
                    pal = Pallet(pal.getItemName(), space, new_itemCount);
                }
            }
        }
    }
    if(itemCount == 0){
        return true;
    }else{
        return false;
    }
}
        


