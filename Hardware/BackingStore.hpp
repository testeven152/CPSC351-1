#include "Word.hpp"



class BackingStore {
    public:
        ~BackingStore();
        BackingStore();
        // BackingStore& instance();
        // BackingStore& operator=();
        void read(Address framenumber);
    private:
        // BackingStore()
};