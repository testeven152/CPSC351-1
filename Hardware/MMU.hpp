#include "../OperatingSystem/PCB.hpp"
#include "Word.hpp"
#include "TLB.hpp"

class MemoryManagementUnit {
    public:
        void clearTLB();
        // MemoryManagementUnit& instance(); // ??
        MemoryManagementUnit(); // not sure what this does yet
        // MemoryManagementUnit& operator=(); // ??
        int pageAccesses();
        int pageFaults();
        void read(Address logicaladdress, ProcessControlBlock& pcb, Ram ram, unsigned char& data); // used to be read<t>(), have no idea what the template is for.
        int tlbAccesses();
        int tlbFaults();

    struct PageFault {
        public:
            PageFault(Address pagenumber);
            Word pageNumber_;
    };

    private:
        // MemoryManagementUnit(); // ??
        int page_access_count_;
        int page_in_faults_;
        TLB tlb_;
        int tlb_access_count_;
        int tlb_faults_;

};

