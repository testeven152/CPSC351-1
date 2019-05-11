#include <iostream>
#include <string>

using std::string;

// May not need all headers to be included
#include "Hardware/MMU.hpp"
#include "OperatingSystem/MemoryManager.hpp"
#include "OperatingSystem/PCB.hpp"
#include "Hardware/Word.hpp"
#include "Hardware/RAM.hpp"

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
    // Ram ram;

    while(std::cin >> logicaladdress.value_) { // reads input from addresses.txt. currently reads from value_ because i dont know how to implement int uint32_t()
        try {
            MMU.read(logicaladdress, PCB, data); // translates logical to physical address. if not throws pagefault
            std::cout << data; // outputs physical address from data
            break;
        }
        catch(MemoryManagementUnit::PageFault &pf) { // page fault exception catch. 
            MM.pageIn(pf.pageNumber_, PCB);
        }
    };

    // Below displays page fault rate and tlb hit rate
    double pagefaultrate = (MMU.pageFaults()/MMU.pageAccesses());
    double tlbhitrate = (MMU.tlbFaults()/MMU.tlbAccesses());
    std::cout << "Page Fault Rate: " << pagefaultrate;
    std::cout << "TLB Hit Rate: " << tlbhitrate;

    return 0;


};