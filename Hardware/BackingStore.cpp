#include "BackingStore.hpp"


void BackingStore::read(struct Word page, struct FRAME & data){
    media.seekg(page.value_ * 256);
    media.read((char *)data.bytes, 256);
}

BackingStore::BackingStore() {
   // media("BACKING_STORE.bin", std::ifstream::binary);
}

