#pragma once

#include "../Hardware/Word.hpp"
#include "PCB.hpp"


class MemoryManager {
    public:
        // MemoryManager& instance();
        MemoryManager();
        // MemoryManager& operator=();
        void pageIn(struct Word pagenumber, struct ProcessControlBlock& pcb);
    private:
        struct FreeFrameList freeFrames_;
        // MemoryManager();

};

struct FreeFrameList { //implemented as a queue

    int front, rear;
    int* queue;
    FreeFrameList()
    {
        queue = new int;
        for(int i = 0; i < 256; i++) {
            queue[i] = i + 1;
            rear++;
        }
    }

    ~FreeFrameList() {
        delete[] queue;
    }

    void pop(){
        for (int i = 0; i < rear - 1; i++) {
            queue[i] = queue[i+1];
        }
        rear--;
    }

    int front(){
        return front;
    }

    bool empty(){
        if (front == rear) return true;
        else return false;
    }

};