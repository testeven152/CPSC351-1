#include "MMU.hpp"
#include "RAM.hpp"

void MemoryManagementUnit::read(Address logicaladdress, ProcessControlBlock& pcb, unsigned char& data) {

    Ram ram;

    if(pcb.PageTable[logicaladdress.page().value_].valid) {
        page_access_count_++;
        ram.read(pcb.PageTable[logicaladdress.page().value_].frameNumber, data);
    } else {
        page_access_count_++;
        page_in_faults_++;
        throw MemoryManagementUnit::PageFault(logicaladdress.page().value_);
    }
}

MemoryManagementUnit::PageFault::PageFault(Address pagenumber) {
    pageNumber_.value_ = pagenumber.value_;
}

int MemoryManagementUnit::pageAccesses(){
    return this->page_access_count_;
}

int MemoryManagementUnit::pageFaults(){
    return this->page_in_faults_;
}

int MemoryManagementUnit::tlbAccesses(){
    return this->tlb_access_count_;
}

int MemoryManagementUnit::tlbFaults(){
    return this->tlb_faults_;
}