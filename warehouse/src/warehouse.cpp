#include "include\Warehouse.hpp"
#include <iostream>

// Maak een warehouse
Warehouse::Warehouse(){
    this->shelves = {};
    this->Employees = {};
}

// Zet de Employees in de vector Employees
void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
}

// Zet de shelfs in de vector shelves
void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
}

// Sorteer een shelf naar keuze op oplopende volgorde met de swapPallet functie
bool Warehouse::rearrangeShelf(Shelf& shelf){
    for(Employee& employee : Employees){
        if(!employee.getBusy() && employee.getForkliftCertificate()){
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

// Haal een bepaald aantal van een bepaald soort item uit de shelfs 
bool Warehouse::pickItems(std::string itemName, int itemCount){
    // Check hoeveel items er in totaal zijn
    int items = 0;
    for(Shelf& sh : shelves){
        for(Pallet& pal : sh.pallets){
            if(pal.getItemName() == itemName){
                items += pal.getItemCount();
            }
        }
    }
    
    // Als er genoeg items zijn haal de items uit de pallets met behulp van takeOne
    if(items > itemCount){
        for(Shelf& sh : shelves){
            for(Pallet& pal : sh.pallets){
                if(pal.getItemName() == itemName && itemCount - pal.getItemCount() > 0){
                    for(int i = 0; i < pal.getItemCount(); ++i){
                        pal.takeOne();
                    }
                }else if (pal.getItemName() == itemName && itemCount - pal.getItemCount() <= 0){
                        for(int i = 0; i < itemCount; ++i){
                            pal.takeOne();
                        }
                    }
                }
            }
        return true;
        }else{
            return false;
        }
    }

        


