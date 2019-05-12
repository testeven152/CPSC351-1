#pragma once

#include "../Hardware/Word.hpp"
#include "PCB.hpp"

class MemoryManager {
    public:
        // MemoryManager& instance();
        // MemoryManager();
        // MemoryManager& operator=();
        void pageIn(struct Word pagenumber, struct ProcessControlBlock& pcb);
    private:
        struct FreeFrameList freeFrames_;
        // MemoryManager();

};

struct FreeFrameList {
        bool empty();
        // front();

};