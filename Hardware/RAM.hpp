#pragma once

#include "Word.hpp"

class Ram {
    public:
        // Ram& instance(); // ??
        // Ram& operator=(); // ??
        Ram(); // ??
        void read(unsigned framenumber, Word displacement, unsigned char& data);
        struct FRAME frame[256]; // simple yet effective

/*     struct Status {
        bool accessed = false;
        bool dirty = false;
    };

 */
    private:
        // Ram(); // ??
		FRAME status[256];


        
};

	// Ram is an array of frames
    // This is the same as status. Used frames to see if anything was accessed
	struct FRAME {
        unsigned char bytes[256];
        bool accessed = false;
        bool dirty = false;
    };
    