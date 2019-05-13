#pragma once

class PageReplacementAlgorithm {
    public:
        // ~PageReplacementAlgorithm();
        // struct Word findVictim();
        // PageReplacementAlgorithm& getPRA();
        // void updateUsage();
    protected:
        // PageReplacementAlgorithm();
    private:
        // OptionMap& options();
};

class FirstInFirstOutAlgorithm : public PageReplacementAlgorithm {
    public:
        // struct Word findVictim();
        // FirstInFirstOutAlgorithm();
    private:
        // struct Word front;
};

class LeastRecentlyUsedAlgorithm : public PageReplacementAlgorithm {
    public:
        struct Word findVictim();
        LeastRecentlyUsedAlgorithm();
        void updateUsage();
    private:
        UsedList lruList;
};

class UsedList { //stack implementation
    int top;
    int *arr;
    int capacity;
    
    public:
        UsedList() {
            arr = new int[256];
            capacity = 256;
            top = -1;
        }

        void push(int x) {
            arr[++top] = x;
        }

        void pop(){
            return arr[top--];
        }


};
