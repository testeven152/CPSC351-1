#pragma once

#include "Word.hpp"
#include "RAM.hpp"
#include <fstream>



class BackingStore {
    public:
        // ~BackingStore();
        BackingStore();
        // BackingStore& instance();
        // BackingStore& operator=();
        void read(struct Word page, struct FRAME & data);
    private:
        std::basic_ifstream<char> media;
        // BackingStore();
};