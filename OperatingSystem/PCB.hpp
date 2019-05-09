

struct ProcessControlBlock {
    public:
        PageTable myPageTable;
};

struct PageTableEntry {
    public:
    unsigned frameNumber;
    bool valid;
};

class PageTable {
    public:
    PageTable(int pagesize);

    private:
    PageTableEntry *pages;
};