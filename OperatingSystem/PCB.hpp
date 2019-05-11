

struct ProcessControlBlock {
    public:
        PageTableEntry PageTable[256]; //simple yet effective
};

struct PageTableEntry {
    public:
    unsigned frameNumber;
    bool valid;
};

