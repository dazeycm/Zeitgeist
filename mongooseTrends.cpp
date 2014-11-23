#include "mongooseTrends.h"
#include <algorithm>

bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j);

unsigned int mongooseTrends::getCount(std::string s)	{
	return 0;
}

unsigned int mongooseTrends::numEntries()	{
	return sortedArray.size();
}

std::string mongooseTrends::getNthPopular(unsigned int n)	{
    
    
    std::sort(sortedArray.begin(), sortedArray.end(), compareFunc);
    std::string ret = sortedArray[n].first;

    return ret;
    
}

bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j) {
    if (i.second == j.second){
        return (i.first < j.first);
    }
    
    return (i.second > j.second);
}

void mongooseTrends::increaseCount(std::string s, unsigned int amount)	{
    //case 1: String s is already in the hashTable and array. Add amount to its count
    
    
    //case 2: String s is not in the hashTable/Array. Create s and set count to amount
}

void mongooseTrends::add(std::string s, unsigned int n){
    
    std::pair<std::string, unsigned int> addition (s, n);
    
    hashTable.insert(addition);
    sortedArray.push_back(addition);
    
}



