#pragma once
#include <string>

class item
{
private:
	std::string name_;
	std::string description_;

public:
	item(std::string,std::string);

	std::string get_name();
	std::string get_description();
};

