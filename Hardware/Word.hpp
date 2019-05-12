#pragma once

using std::uint32_t;

struct Word {
    public:
    // int uint32_t();
    // void Word::uint32_t(int value);
    uint32_t value_;
};

struct Address : public Word {
        struct Word address();
        struct Word displacement();
        struct Word frame();
        struct Word page();
};