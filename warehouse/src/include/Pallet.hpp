class Pallet{
    private:
        int itemCount;
        std::string itemName;
        int itemCapacity;
    
    public:
        pallet(int itemCount, std::string itemName, int itemCapacity);
        pallet();
        std::string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
};