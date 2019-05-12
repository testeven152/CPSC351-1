#include "RAM.hpp"


void Ram::read(unsigned framenumber, Word displacement, unsigned char& data){
    if(frame[framenumber].dirty == 0){
        data = frame[framenumber].bytes[displacement.value_];
    } else{
        // what if dirty bit is true
    }
}

Ram::Ram() {

}