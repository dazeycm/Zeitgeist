#include "mongooseTrends.h"

unsigned int mongooseTrends::getCount(std::string s)	{
	return 0;
}

unsigned int mongooseTrends::numEntries()	{
	return 0;
}

std::string mongooseTrends::getNthPopular(unsigned int n)	{
	return "";
}

void mongooseTrends::increaseCount(std::string s, unsigned int amount)	{

}

void mongooseTrends::add(std::string s, unsigned int n){
    
    std::pair<std::string, int> addition (s, n);
    
    hashTable.insert(addition);
    
}
