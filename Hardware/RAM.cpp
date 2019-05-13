#include "RAM.hpp"


void Ram::read(unsigned framenumber, struct Word displacement, unsigned char& data){

        data = frame[framenumber].bytes[displacement.value_];
 
}

Ram::Ram() {

}