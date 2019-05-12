#include "MMU.hpp"

MemoryManagementUnit::MemoryManagementUnit(){
    page_access_count_ = 0;
    page_in_faults_ = 0;
    tlb_access_count_ = 0;
    tlb_faults_ = 0;
    clearTLB();
}

void MemoryManagementUnit::read(Address logicaladdress, ProcessControlBlock& pcb, Ram ram, unsigned char& data) {

    //tlb search
    tlb_access_count_++;
    for(int i = 0; i < 16; i++){
        if(tlb_.table[i].pagenumber.value_ == logicaladdress.page().value_){
            ram.read(tlb_.table[i].framenumber.value_, logicaladdress.displacement(), data);
            break;
        } 
    }
    tlb_faults_++;

    if(pcb.PageTable[logicaladdress.page().value_].valid) {
        page_access_count_++;
        ram.read(pcb.PageTable[logicaladdress.page().value_].frameNumber,logicaladdress.displacement(), data);
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

void MemoryManagementUnit::clearTLB(){
    for (int i = 0; i < 16; i++) {
        tlb_.table[i].framenumber.value_ = 0;
        tlb_.table[i].pagenumber.value_ = 0;
    }
}