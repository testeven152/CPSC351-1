#include "../Hardware/Word.hpp"
#include "PCB.hpp"

class MemoryManager {
    public:
        // MemoryManager& instance();
        // MemoryManager();
        // MemoryManager& operator=();
        void pageIn(Word pagenumber, ProcessControlBlock& pcb);
    private:
        FreeFrameList freeFrames_;
        // MemoryManager();

};

struct FreeFrameList {
    public:
        bool empty();
        // front();

};