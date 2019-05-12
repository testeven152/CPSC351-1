#include "MemoryManager.hpp"

void MemoryManager::pageIn(struct Word pagenumber, struct ProcessControlBlock& pcb){
    if(!freeFrames_.empty()) {
        // need to implement freeframeslist before implementing this function
        // framenumber = freeFrames_.front();
        // freeFrames_.pop.front();
    } else {
        // pcb.PageTable[pagenumber.value_] = framenumber;
        // framenumber = true;
        // backingstore.read(frame, RAM[frame]);
        
    }
}

bool FreeFrameList::empty() {

}