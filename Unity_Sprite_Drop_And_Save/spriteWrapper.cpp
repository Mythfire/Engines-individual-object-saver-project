#include "spriteWrapper.h"
#include "spriteFunctions.h"

spriteSaver sprite_saver;

PLUGIN_API bool save(float spriteX, float spriteY)
{
	return sprite_saver.save (spriteX, spriteY);
}

PLUGIN_API Vector2 replace()
{
	return sprite_saver.replace () ;
}
