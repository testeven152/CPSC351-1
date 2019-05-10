#include "MMU.hpp"
#include "RAM.hpp"

void MemoryManagementUnit::read(Address logicaladdress, ProcessControlBlock& pcb, unsigned char& data) {
    RAM ram;
    
    if(pcb.PageTable[logicaladdress.page().value_].valid) {
        page_access_count_++;
        ram.read(pcb.PageTable[logicaladdress.page().value_].frameNumber, data);
    } else {
        page_in_faults_++;
        throw MemoryManagementUnit::PageFault(logicaladdress.page().value_);
    }
}

MemoryManagementUnit::PageFault::PageFault(Address pagenumber) {
    pageNumber_.value_ = pagenumber.value_;
}