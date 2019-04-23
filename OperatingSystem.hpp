
#include "Hardware.hpp"


class PageReplacementAlgorithm {
    public:
        ~PageReplacementAlgorithm();
        Word findVictim();
        PageReplacementAlgorithm& getPRA();
        void updateUsage();
    protected:
        PageReplacementAlgorithm();
    private:
        // OptionMap& options();
};

class FirstInFirstOutAlgorithm : public PageReplacementAlgorithm {
    public:
        Word findVictim();
        FirstInFirstOutAlgorithm();
    private:
        Word front;
};

struct PageTableEntry {
    public:
    unsigned frameNumber;
    bool valid;
};

struct ProcessControlBlock {
    public:
        // PageTable myPageTable;
};

class MemoryManager {
    public:
        MemoryManager& instance();
        MemoryManager();
        // MemoryManager& operator=();
        void pageIn();
    private:
        // FreeFrameList freeFrames_;
        MemoryManager();

}