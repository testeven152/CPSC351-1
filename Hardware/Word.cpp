#include "Word.hpp"


Word Address::address(){
    Word temp;
    (&temp)->value_ = (this->value_ & 0xFFFF);
    return temp;
}

Word Address::displacement(){
    Word temp;
    (&temp)->value_ = (this->value_ & 0xFF);
    return temp;
}

Word Address::frame(){ //not sure what this does
}

Word Address::page(){
    Word temp;
    (&temp)->value_ = ((this->value_ & 0xFF00) >> 8);
    return temp;
}