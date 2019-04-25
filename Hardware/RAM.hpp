

class Ram {
    public:
        Ram& instance();
        // Ram& operator=();
        Ram();
        // void read<T>();
    
    private:
        Ram();
        struct Status {
            bool accessed;
            bool dirty;
        };
};