#include <gb/gb.h>
#include <stdio.h>
#include ".\sprites\BikerSprites.c"

void main(){
    UINT8 currentSpriteIndex = 0;

    set_sprite_data(0, 3, Biker);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);

    SHOW_SPRITES;

    while(1)
    {
        if(currentSpriteIndex == 0)
        {
            currentSpriteIndex = 1;
        }
        else
        {
            currentSpriteIndex = 0;
        }
        set_sprite_tile(0, currentSpriteIndex);
        delay(1000);
    }
}