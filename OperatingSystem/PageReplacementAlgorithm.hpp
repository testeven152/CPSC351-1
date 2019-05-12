#pragma once
#include <"TLB.h">


class PageReplacementAlgorithm {
    public:
        // ~PageReplacementAlgorithm();
        // Word findVictim();
        // PageReplacementAlgorithm& getPRA();
        void updateUsageLRU(TLBentry);
		void updateUsageFIFO(TLBentry);
    protected:
        // PageReplacementAlgorithm();
    private:
        // OptionMap& options();
};

class FirstInFirstOutAlgorithm : public PageReplacementAlgorithm {
    public:
        // Word findVictim();
        // FirstInFirstOutAlgorithm();
    private:
        // Word front;
};

class LeastRecentlyUsedAlgorithm : public PageReplacementAlgorithm {
    public:
        // Word findVictim();
        //LeastRecentlyUsedAlgorithm();
        // void updateUsage();
    private:
        // UsedList lruList;
};


/*
This is the PageReplacementAlgorithm.cpp file implementation below
*/

void PageReplacementAlgorithm::updateUsageLRU(TLBentry Ltable) {
	for (int i = table.pagenumber; i < 16; i++)
	{
		table[i].pagenumber = table[i + 1].pagenumber;
		table[i].framenumber = table[i + 1].framenumber;
	}
	

	table[16] = Ltable;
	// Still have to "cout" something here or not
}

void PageReplacementAlgorithm::updateUsageFIFO(TLBentry FTable) {
	for (int i = 0; i < 15; i++)
	{
		table[i] = table[i + 1];
	}
	table[16] = FTable;
	// Still have to "cout" something here or not
}
