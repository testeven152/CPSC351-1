

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