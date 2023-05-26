#include "include\Warehouse.hpp"

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
    for(Employee employee : Employees){
        if(employee.getBusy() == false && employee.getForkliftCertificate()){
            employee.setBusy(true);
            for(int indx = 0; indx < 3; indx++){
                restartLoop:
                if(shelf.pallets[indx].getItemCount() > shelf.pallets[indx + 1].getItemCount()){
                    shelf.swapPallet(indx, indx + 1);
                }
            goto restartLoop;
            return true;
            }
        }
    }
    return false;
}

bool Warehouse::pickItems(std::string itemName, int itemCount){
    int total_items = 0;
    int total_pallets = 0;
    for(Shelf sh : shelves){
        total_pallets += 4;
    }
    if(total_items >= total_pallets){
        
        return true;
    }else{
        return false;
    }
    
}