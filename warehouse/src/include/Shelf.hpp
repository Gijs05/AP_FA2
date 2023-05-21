#include <vector>

class shelf{
    public:
        std::vector <int> pallets;
        shelf();
        bool swapPallet(int slot, int slot2);
};