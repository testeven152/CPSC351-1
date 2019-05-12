#pragma once

class PageReplacementAlgorithm {
    public:
        // ~PageReplacementAlgorithm();
        // Word findVictim();
        // PageReplacementAlgorithm& getPRA();
        // void updateUsage();
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
        // LeastRecentlyUsedAlgorithm();
        // void updateUsage();
    private:
        // UsedList lruList;
};
