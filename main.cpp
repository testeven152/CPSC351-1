#include <iostream>



// May not need all headers to be included
#include "Hardware/MMU.hpp"
#include "OperatingSystem/MemoryManager.hpp"
#include "OperatingSystem/PCB.hpp"

const int PAGE_SIZE = 256;
const int FRAME_SIZE = 256;
const int FRAMES = 256;
const int TLB_SIZE = 16;


unsigned int logicaladdress;
unsigned char data;

ProcessControlBlock PCB;
MemoryManagementUnit MMU;
MemoryManager MM;

int main() {


    while(std::cin >> logicaladdress) {
        try {
            MMU.read(logicaladdress, PCB, data);
            std::cout << data;
            break;
        }
        catch(PageFault pf) {
            MM.pageIn(logicaladdress, PCB.myPageTable);
        }
    };


};