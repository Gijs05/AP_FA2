#include "Pallet.hpp"

class Shelf{
    public:
        std::array <Pallet, 4> pallets;
        shelf();
        bool swapPallet(int slot, int slot2);
};