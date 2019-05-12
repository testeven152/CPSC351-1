#pragma once

class TLB {
    public:
        struct TLBentry table[16]; //simple yet effective
};

struct TLBentry {
    public:
        struct Word pagenumber;
        struct Word framenumber;
};