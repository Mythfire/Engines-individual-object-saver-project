#pragma once

#ifdef SAVESPRITE_EXPORTS
#define PLUGIN_API __declspec(dllexport)

//JUST GOOD FORM TO HAVE AN IMPORTS TOO.
//JUST IN CASE.
#elif SAVESPRITE_IMPORTS
#define PLUGIN_API __declspec(dllimport)

#else
#define PLUGIN_API
#endif