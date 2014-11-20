#include "Trends.h"
#include <vector>

class mongooseTrends : public Trends {
public: 
	unsigned int numEntries();
	unsigned int getCount(std::string s);
	virtual void increaseCount(std::string s, unsigned int amount);
	virtual std::string getNthPopular(unsigned int n);
};