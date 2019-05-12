#include "Word.hpp"
#include "RAM.hpp"
#include <fstream>



class BackingStore {
    public:
        // ~BackingStore();
        BackingStore();
        // BackingStore& instance();
        // BackingStore& operator=();
        void read(Word page, unsigned char & data);
    private:
        std::basic_ifstream<char> media;
        // BackingStore()
};