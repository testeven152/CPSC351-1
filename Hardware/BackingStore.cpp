#include "BackingStore.hpp"


void BackingStore::read(Word page, unsigned char & data){
    media.seekg(page.value_ * 256);
    // media.read(, 256);
}

BackingStore::BackingStore() {
    // media("BackingStore.bin", std::ifstream::binary);
}

