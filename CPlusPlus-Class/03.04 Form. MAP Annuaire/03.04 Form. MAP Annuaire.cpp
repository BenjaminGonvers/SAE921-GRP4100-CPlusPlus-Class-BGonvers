#include <iostream>
#include <map>
#include <string>

int main()
{
    std::string name;
    int number;
    std::string findRange;
    std::map<std::string, int> botin;

  
    botin["a"] = 10;
    botin["b"] = 20;
    botin["c"] = 30;
    botin["d"] = 40;

    std::map<std::string, int>::iterator it;


    for (it = botin.begin(); it != botin.end() ; ++it) {

        std::cout << it->first << " => " << it->second << '\n';

    }
    std::cout << "\n\n\n";

    std::cout << " hello tu peus rentré un nom?" << std::endl;
    std::cin >> name;
    std::cout << std::endl << " et ton numéro" << std::endl;
    std::cin >> number;
    std::cout << std::endl;

    botin[name] = number;

    for (it = botin.begin(); it != botin.end(); ++it) {

        std::cout << it->first << " => " << it->second << '\n';

    }

    std::cout << "tu recherche quelque chose?" << std::endl;
    std::cin >> findRange;
    std::cout << std::endl;

    it = botin.find(findRange);
    
    if (it == botin.end())
    {
        std::cout << "non je ne trouve pas";

    }
    else
    {

        std::cout << "c'est ça que tu cherche?\n" << it->first << " : " << it->second;

    }



}