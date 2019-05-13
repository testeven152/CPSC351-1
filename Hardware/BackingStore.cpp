#include "BackingStore.hpp"


void BackingStore::read(struct Word page, struct FRAME & data){
    media.seekg(page.value_ * 256);
    media.read((char *)data.bytes, 256);
}

BackingStore::BackingStore() 
{
	//Constructor for the backing store
	//Reads it in
	media("BACKING_STORE.bin", ios::binary);
	if (media)
	{
		media.seekg(0, media.end);
		length = is.tellg();
		media.seekg(0, media.beg);
		offset = 0;
	}
	else
	{
		std::cout << "Unable to open BACKING STORE\n";
	}
}
