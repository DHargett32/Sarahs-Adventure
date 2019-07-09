#include <gb/gb.h>
#include <stdio.h>
#include "GameCharacter.c"
#include ".\sprites\characterSprites.c"

struct GameCharacter sarah;
UBYTE spritesize = 8;

void moveGameCharacter(struct GameCharacter* character, UINT8 x, UINT8 y)
{
    move_sprite(character->spritids[0], x, y);
    move_sprite(character->spritids[1], x + spritesize, y);
    move_sprite(character->spritids[2], x, y + spritesize);
    move_sprite(character->spritids[3], x + spritesize, y + spritesize);
}

void setupSarah()
{
    sarah.x = 80;
    sarah.y = 130;
    sarah.width = 16;
    sarah.height = 16;

    // load sprites
    set_sprite_tile(0,0);
    sarah.spritids[0] = 0;
    set_sprite_tile(1,1);
    sarah.spritids[1] = 1;
    set_sprite_tile(2,2);
    sarah.spritids[2] = 2;
    set_sprite_tile(3,3);
    sarah.spritids[3] = 3;

    moveGameCharacter(&sarah, sarah.x, sarah.y);

}

void main(){
    set_sprite_data(0, 6, CharacterSprites);
    setupSarah();

    SHOW_SPRITES;

    while(1)
    {
        /*
        if(currentSpriteIndex == 0)
        {
            currentSpriteIndex = 1;
        }
        else
        {
            currentSpriteIndex = 0;
        }
        set_sprite_tile(0, currentSpriteIndex);*/

    }
}