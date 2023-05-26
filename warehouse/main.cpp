#include <iostream>
#include "src/include/Warehouse.hpp"

int main(void){
    // Eerst maak je een shelf
    Shelf shelf1 = Shelf();

    // Je kan de pallets in delen zoals je wil als het er maar 4 per shelf zijn
    shelf1.pallets = {
        Pallet("Books", 100, 40), 
        Pallet("Books", 100, 20), 
        Pallet(), 
        Pallet()
    };

    // Maak een warehouse aan om je shelf in te stoppen
    Warehouse warehouse = Warehouse();
    warehouse.addShelf(shelf1);

    // Zorg ook dat je minstens 1 Employee hebt
    Employee e1 = Employee("Bob", true);
    warehouse.addEmployee(e1);

    // Nu kan je alle functies oproepen die je wil
    warehouse.pickItems("Books", 30);
}
