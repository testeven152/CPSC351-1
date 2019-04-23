

class MemoryManagementUnit {
    public:
        void clearTLB();
        MemoryManagementUnit& instance();
        MemoryManagementUnit();
        // MemoryManagementUnit& operator=();
        // pageAccesses();
        // pageFaults();
        // void read<T>();
        // tlbAccesses();
        // tlbFaults();
    private:
        MemoryManagementUnit();
        int page_access_count_;
        int page_in_faults_;
        // TLB tlb_;
        int tlb_access_count_;
        int tlb_faults_;

        struct PageFault {
            public:
                PageFault();
                Word pageNumber_;
        };
};

struct Word {
    public:
    int uint32_t();
    // uint32_t value_;
};

struct Address : public Word {
    public:
        Word address();
        Word displacement();
        Word frame();
        Word page();
};

class Ram {
    public:
        Ram& instance();
        // Ram& operator=();
        Ram();
        // void read<T>();
    
    private:
        Ram();

        struct Status {
            bool accessed;
            bool dirty;
        };
};