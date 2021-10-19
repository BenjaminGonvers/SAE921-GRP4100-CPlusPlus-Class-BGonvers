#pragma once
#include <string>
#include <vector>
#include "item.h"

class inventory
{
private:
	std::vector<item*> items_;

public:
	inventory();
	void add_item(std::string,std::string);
	std::string use_item(std::string);
	
};

