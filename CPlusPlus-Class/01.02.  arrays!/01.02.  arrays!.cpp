
#include <iostream>
#include <array>
#include <chrono>
#include <random>

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();


std::default_random_engine seedGenerator(seed);
std::uniform_int_distribution<int> generatorD20{ 1, 20 };
std::uniform_int_distribution<int> generatorD100{ 1, 100 };

int main()
{
	std::array<int, 10> Values{};
	int playerValue = 0 ;

	
	

		std::cin.clear();
		std::cout << "choisissez un nombre entre 1 et 20 inclusif" << std::endl;
		std::cin >> playerValue;

		for (int index = 0; index < 10;index++)
		{
			Values.at(index) = generatorD20(seedGenerator);
			std::cout << Values.at(index) << "   ";
			
		}
		std::cout << std::endl;
		
		for (int index = 0; index < 10; index++)
		{
			if (Values.at(index) == playerValue)
			{

				std::cout << "Bravo, vous avez trouvé votre nombre!";
				return EXIT_SUCCESS;

			}

			std::cout << "Perdu une autre fois peus étre";
			return EXIT_FAILURE;
		}
	
}



