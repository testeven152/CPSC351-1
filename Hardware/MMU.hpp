#include "../OperatingSystem/PCB.hpp"
#include "Word.hpp"

class MemoryManagementUnit {
    public:
        // void clearTLB();
        // MemoryManagementUnit& instance();
        // MemoryManagementUnit();
        // MemoryManagementUnit& operator=();
        // pageAccesses();
        // pageFaults();
        void read(Address logicaladdress, ProcessControlBlock& pcb, unsigned char& data); // used to be read<t>(), have no idea what the template is for.
        // tlbAccesses();
        // tlbFaults();

    struct PageFault {
        public:
            PageFault(Address pagenumber);
            Word pageNumber_;
    };

    private:
        // MemoryManagementUnit();
        int page_access_count_ = 0;
        int page_in_faults_ = 0;
        // TLB tlb_;
        // int tlb_access_count_;
        // int tlb_faults_;

};

