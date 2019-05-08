

class MemoryManagementUnit {
    public:
        // void clearTLB();
        // MemoryManagementUnit& instance();
        // MemoryManagementUnit();
        // MemoryManagementUnit& operator=();
        // pageAccesses();
        // pageFaults();
        // void read<T>();
        // tlbAccesses();
        // tlbFaults();
    private:
        // MemoryManagementUnit();
        // int page_access_count_;
        // int page_in_faults_;
        // TLB tlb_;
        // int tlb_access_count_;
        // int tlb_faults_;

        struct PageFault {
            public:
                PageFault();
                Word pageNumber_;
        };
};
