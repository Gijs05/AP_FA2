#include <vector>
#include "Employee.hpp"
#include "Shelf.hpp"

class Warehouse{
    public:
        std::vector <Employee> Employees;
        std::vector <Shelf> shelves;
        Warehouse();
        void addEmployee(Employee employee);
        void addShelf(Shelf shelf);
        bool rearrangeShelf(Shelf& shelf);
        bool pickItems(std::string itemName, int itemCount);
};