

struct ProcessControlBlock {
    public:
        PageTableEntry PageTable[256];
};

struct PageTableEntry {
    public:
    unsigned frameNumber;
    bool valid;
};

