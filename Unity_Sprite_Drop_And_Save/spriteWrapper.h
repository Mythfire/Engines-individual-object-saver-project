#pragma once
#include "Vector2.h"
#include "PluginSettings.h"


#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

	PLUGIN_API bool save(float spriteX, float spriteY);

	PLUGIN_API Vector2 replace();


#ifdef __cplusplus

}
#endif