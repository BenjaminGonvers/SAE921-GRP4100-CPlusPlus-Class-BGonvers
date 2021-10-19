#include "Item.h"

#include <iostream>

item::item(std::string new_name,std::string new_description)
{
	this->name_ = new_name;
	this->description_ = new_description;

	std::cout << "item Constructor" << std::endl;
}

std::string item::get_name()
{
	return this->name_;
}

std::string item::get_description()
{
	return this->description_;
}
