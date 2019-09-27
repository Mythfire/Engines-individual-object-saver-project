#pragma once

#include "PluginSettings.h"
#include "Vector2.h"


class PLUGIN_API spriteSaver
{
public:

		//place sprite
	void place();

	bool save(float spriteX, float spriteY);

	Vector2 replace();

		//save sprite position


		//return sprite to saved position


};