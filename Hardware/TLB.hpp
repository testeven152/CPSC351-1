

class TLB {
    public:
        TLBentry table[16]; //simple yet effective
};

struct TLBentry {
    public:
        Address pagenumber;
        Address framenumber;
};