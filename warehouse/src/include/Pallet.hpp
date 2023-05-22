class Pallet{
    private:
        int itemCount;
        std::string itemName;
        int itemCapacity;
    
    public:
        Pallet(int itemCount, std::string itemName, int itemCapacity);
        Pallet();
        std::string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
};