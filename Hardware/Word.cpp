#include "Word.hpp"

/* int Word::uint32_t(){
    return (int)this->value_;
}

void Word::uint32_t(int value){
    this->value_ = (uint32_t)value;
} */

struct Word Address::address(){
    struct Word temp;
    (&temp)->value_ = (this->value_ & 0xFFFF);
    return temp;
}

struct Word Address::displacement(){
    struct Word temp;
    (&temp)->value_ = (this->value_ & 0xFF);
    return temp;
}

struct Word Address::frame(){ //not sure what this does
}

struct Word Address::page(){
    struct Word temp;
    (&temp)->value_ = ((this->value_ & 0xFF00) >> 8);
    return temp;
}