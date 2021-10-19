#include <string>
#include <vector>
#include <iostream>
#include "Inventory.h"

int main()
{

    auto my_inventory = std::make_unique<inventory>();
    
    my_inventory->add_item("marteau", "juste un marteau");
    my_inventory->use_item("marteau");
    my_inventory->add_item("arc", "juste un arc");
    my_inventory->use_item("marteau");
    my_inventory->use_item("arc");
  

}

