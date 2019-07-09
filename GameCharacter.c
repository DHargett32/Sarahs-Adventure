#include<gb/gb.h>


struct GameCharacter
{
    UBYTE spritids[4]; // character uses 4 sprites
    UINT8 x;
    UINT8 y;
    UINT8 width;
    UINT8 height;
};
