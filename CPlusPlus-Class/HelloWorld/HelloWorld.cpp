
#include <random> 
#include <iostream>
#include <chrono>

int main()
{
	int gameOut = 0;
	int stopGambling = 0;
	int moneyValue = 0;
	int firstValue = 0;
	int segondValue = 0;
	int wrongEntry = 0;
	int choixDouble = 0;
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	

	std::default_random_engine seedGenerator(seed);
	std::uniform_int_distribution<int> generatorD6 { 1, 6 };
	std::uniform_int_distribution<int> generatorD10{ 1, 10 };

	


		std::cout << "bienvenu au jeux de des" << std::endl;
		std::cout << "vous pouvez miser et aprés avoir miser vous pourrer lancé vos deux des" << std::endl;
		std::cin >> moneyValue;
		std::cout << "vous avez miser : " << moneyValue << "!" << std::endl;

	while (!gameOut) {
		std::cout << "   ____             " << std::endl;
		std::cout << "  /\' .\    _____   " << std::endl;
		std::cout << " / :\___\  /.   /\  " << std::endl;
		std::cout << " \' / .  //____/..\ " << std::endl;
		std::cout << "  \/___/  \'  '\  / " << std::endl;
		std::cout << "           \'__'\/  " << std::endl;

		firstValue = generatorD6(seedGenerator);
		segondValue = generatorD6(seedGenerator);

		std::cout << "vous avez lancer les des" << std::endl;
		std::cout << "voici vos resultat" << std::endl;
		std::cout << "vous avez eu " << firstValue << " et " << segondValue << std::endl;
		std::cout << "celas fait " << firstValue + segondValue << std::endl;

		if (firstValue + segondValue > 7 ){

			std::cout << "bravo" << std::endl;
			std::cout << "vous avez gagné!";
			moneyValue = 2 * moneyValue;
			std::cout << "ce qui vous fait  " << moneyValue << std::endl;
			std::cout << "voulez vous quitter ou doublé?" << std::endl;
			std::cout << "Doublé = 2  / quitter = 1" << std::endl;
			
			wrongEntry = 1;
			while (wrongEntry)
			{
				
				wrongEntry = 0;
				std::cin >> choixDouble;
				if (choixDouble == 2) {

					std::cout << "alors relonçons!" << std::endl;

				}
				else if (choixDouble == 1 ) {

					std::cout << "bon gain et bonne journée!" << std::endl;
					gameOut = 1;

				}
				else
				{
					std::cout << "ce n'est pas ce que j'ai demander, pouvez vous répondre par 1 ou 2" << std::endl;
					wrongEntry = 1;
				}
			}
		}
		else{

			std::cout << "dommage vous avez tout perdu";
			gameOut = 1;

		}

	
	}

}