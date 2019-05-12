#include "BackingStore.hpp"

using namespace std;


void BackingStore::read(struct Word page, struct FRAME & data){
    media.seekg(page.value_ * 256);
    media.read((char *)data.bytes, 256);
}

BackingStore::BackingStore() 
{
	media("BackingStore.bin", ios::binary);
	if (media)
	{
		media.seekg(0, media.end);
		length = is.tellg();
		media.seekg(0, media.beg);
		offset = 0;
	}
	else
	{
		cout << "Unable to open BACKING STORE" << endl;
	}
}

