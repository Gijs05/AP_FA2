#include "Pallet.hpp"
#include "Icontainer.hpp"
#include <array>

class Shelf : public Icontainer{
    public:
        std::array<Pallet, 4> pallets;
        Shelf();
        bool swapPallet(int slot, int slot2);
        bool isEmpty() override;
        bool isFull() override;
};