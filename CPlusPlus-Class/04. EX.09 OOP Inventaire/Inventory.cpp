#include "Inventory.h"

#include <iostream>

inventory::inventory()
{
    std::cout << "Inventory constructor" << std::endl;

}

void inventory::add_item(std::string new_item,std::string new_description)
{

    items_.emplace_back(new item(new_item,new_description));
    std::cout << "AddItem(" << new_item << ")" << std::endl;

}

std::string inventory::use_item(std::string item_use)
{
    bool found_item = false;
    int index = 0;
    int current = 0;
   
    
    do
    {
        if (items_.at(current)->get_name() == item_use)
        {
            found_item = true;
        }else
        {
            index++;
            current++;
        }


    } while (!found_item && items_.size() > index);

    std::cout << item_use << std::endl;
    return items_.at(current)->get_name();
    
}

