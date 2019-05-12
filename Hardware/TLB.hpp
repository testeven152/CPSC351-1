

class TLB {
    public:
        TLBentry table[16]; //simple yet effective
};

struct TLBentry {
    public:
        Word pagenumber;
        Word framenumber;
};