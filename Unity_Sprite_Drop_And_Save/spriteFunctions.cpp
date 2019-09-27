#include "spriteFunctions.h"
#include <fstream> //for files.

#include <sstream> //for strings.

void spriteSaver::place()
{

}

bool spriteSaver::save(float spriteX, float spriteY)
{
	std::ofstream fileStream;
	fileStream.open("spritePos.txt"); // our file to hold the sprite objects position
	 

	fileStream << std::to_string(spriteX) + " " + std::to_string(spriteY) ;

	fileStream.close();
	return true;
}

Vector2 spriteSaver::replace()
{
	Vector2 charlie; //because I had to name the vector.

	std::ifstream fileStream;

	fileStream.open ("spritePos.txt"); //read from our text file

	std::string f;		std::getline (fileStream, f); //f indicating a float

	std::istringstream posIn(f);

	posIn >> charlie.x >> charlie.y; // pass our data into

	return charlie;

}
