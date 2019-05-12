#pragma once

struct ProcessControlBlock {
    public:
        struct PageTableEntry PageTable[256]; //simple yet effective
};

struct PageTableEntry {
    public:
    unsigned frameNumber = 0;
    bool valid = 0;
};

