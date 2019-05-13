#include <iostream>
#include <string>

using std::string;

// May not need all headers to be included
#include "Hardware/MMU.hpp"
#include "OperatingSystem/MemoryManager.hpp"
#include "OperatingSystem/PCB.hpp"
#include "Hardware/Word.hpp"
#include "Hardware/RAM.hpp"
#include "Hardware/BackingStore.hpp"
#include "OperatingSystem/PageReplacementAlgorithm.hpp"

int main() {

    struct Address logicaladdress;
    unsigned char data;
    struct ProcessControlBlock PCB;
    MemoryManagementUnit MMU;
    MemoryManager MM;
    Ram ram;
    PageReplacementAlgorithm pra;

    while(std::cin >> logicaladdress.value_) { // reads input from addresses.txt. currently reads from value_ because i dont know how to implement int uint32_t()
        try {
            MMU.read(logicaladdress, PCB, ram, data); // translates logical to physical address. if not throws pagefault
            std::cout << data; // outputs physical address from data
            break;
        }
        catch(struct MemoryManagementUnit::PageFault &pf) { // page fault exception catch. 
            MM.pageIn(pf.pageNumber_, PCB);
        }
    };

    // Below displays page fault rate and tlb hit rate
    double pagefaultrate = (MMU.pageFaults()/MMU.pageAccesses());
    double tlbhitrate = ((MMU.tlbAccesses()-MMU.tlbFaults())/MMU.tlbAccesses());
    std::cout << "Page Fault Rate: " << pagefaultrate << "\n";
    std::cout << "TLB Hit Rate: " << tlbhitrate << "\n";

    return 0;


};