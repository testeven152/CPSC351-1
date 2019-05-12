#include "RAM.hpp"


void Ram::read(unsigned framenumber, struct Word displacement, unsigned char& data){
    if(frame[framenumber].dirty == 0){
        data = frame[framenumber].bytes[displacement.value_];
    } else{
        // what if dirty bit is true
    }
}

Ram::Ram() {
	frame[256][256];
	for (int i = 0; i < 256; i++)
	{
		for (int j = 0; j < 256; j++)
		{
			frame[i][j] = 0;
		}
	}
	
	//initialized the Ram to all 0's
	//frame[framenumber][offset]
}