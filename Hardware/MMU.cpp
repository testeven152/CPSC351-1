#include "MMU.hpp"

void MemoryManagementUnit::read(int logicaladdress, ProcessControlBlock pcb, int data) {
    int pagenumber = ((logicaladdress & 0xFF00) >> 8);
    int offset = (logicaladdress & 0xFF);
    // int framenumber = pagetable.pages[pagenumber];
}