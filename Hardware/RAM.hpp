#include "Word.hpp"

class Ram {
    public:
        // Ram& instance(); // ??
        // Ram& operator=(); // ??
        Ram(); // ??
        void read(unsigned framenumber, Word displacement, unsigned char& data);
        FRAME frame[256]; // simple yet effective

/*     struct Status {
        bool accessed = false;
        bool dirty = false;
    };

 */
    private:
        // Ram(); // ??

        
};

    struct FRAME {
    public:
        unsigned char bytes[256];
        bool accessed = false;
        bool dirty = false;
    };
    