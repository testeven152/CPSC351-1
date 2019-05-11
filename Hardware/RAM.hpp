

class Ram {
    public:
        // Ram& instance(); // ??
        // Ram& operator=(); // ??
        Ram(); // ??
        void read(unsigned framenumber, unsigned char& data);

    struct Status {
        bool accessed;
        bool dirty;
    };
    
    private:
        // Ram(); // ??
};

struct FRAME {
    public:
        FRAME();

};