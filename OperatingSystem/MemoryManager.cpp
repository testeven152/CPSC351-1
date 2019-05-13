#include "MemoryManager.hpp"

MemoryManager::MemoryManager() {
}

void MemoryManager::pageIn(struct Word pagenumber, struct ProcessControlBlock& pcb){
    unsigned framenumber;
    
    if(!freeFrames_.empty()) {
        // need to implement freeframeslist before implementing this function
        framenumber = freeFrames_.front();
        freeFrames_.pop();
    } else {
        //PRA b/c this means there are no empty frames in RAM
        framenumber = findvictim(); //returns framenumber to be chosen

    }
    pcb.PageTable[pagenumber.value_] = framenumber;
    pcb.PageTable[pagenumber.value_].valid = 1;
    bs.read(framenumber, RAM.frame[framenumber]);
}