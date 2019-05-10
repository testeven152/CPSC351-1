#include <iostream>



// May not need all headers to be included
#include "Hardware/MMU.hpp"
#include "OperatingSystem/MemoryManager.hpp"
#include "OperatingSystem/PCB.hpp"
#include "Hardware/Word.hpp"

const int PAGE_SIZE = 256;
const int FRAME_SIZE = 256;
const int FRAMES = 256;
const int TLB_SIZE = 16;

int main() {

    Address logicaladdress;
    unsigned char data;
    ProcessControlBlock PCB;
    MemoryManagementUnit MMU;
    MemoryManager MM;

    while(std::cin >> logicaladdress.value_) {
        try {
            MMU.read(logicaladdress, PCB, data);
            std::cout << data;
            break;
        }
        catch(MemoryManagementUnit::PageFault &pf) {
            MM.pageIn(pf.pageNumber_, PCB);
        }
    };


};