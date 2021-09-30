
#include <random> 
#include <iostream>
#include <chrono>
#include <vector>



unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();//creat a clock for the random generator
std::default_random_engine seedGenerator(seed);// the famous generator
std::uniform_int_distribution<int> generatorD6{ 1, 6};// generator for create value between 1 and 20 for percentage(so french term)


int main()
{
	std::vector<bool> revolverBarillet;// creat the barillet
	int newAmunition = 0 ; //two value one for the number of amunitionand the other for the "ID" of all new amunition
	int choiceNumberAmunition = 0 ;


	do
	{

		std::cout << "Nous avons un barillet de 6, vous pouvez choisire le nombre de balle (max 4)" << std::endl;
		std::cin >> choiceNumberAmunition;// the player can choose a number of bullet in 1 and 4 bullet
		std::cout << std::endl;
	
	} while (choiceNumberAmunition > 4 || choiceNumberAmunition < 1);


	for (int i = 0 ; i <= 5 ; i++)//this create the barillet chamber 6 chamber in total
	{

		revolverBarillet.push_back(0);

	}

	for (int i = 1 ; i <= choiceNumberAmunition; i++)// this creat new bullet and distribue them in the barillet
	{
		do
		{
			newAmunition = generatorD6(seedGenerator);

		} while (revolverBarillet.at(newAmunition-1) == true);//this confirm that the bullet cannot go in a chamber if he have already a bullet

		revolverBarillet.at(newAmunition-1) = true;//insert bullet in the chamber
		
	} 

	for (int i = 0; i <= 5; i++)
	{

		std::cout << revolverBarillet.at(i);// test visualy the barillet going to be erased

	}

	std::cout << std::endl << "Allez c'est partit!" << std::endl;
	std::cin.ignore();

	for (int i = 0; i <= 5; i++)
	{
		
		std::cout << "-Enter- pour appuier sur la gachette" << std::endl;
		std::cin.ignore();


		if (revolverBarillet.at(i) == true)
		{
			std::cout << "BANG\n Dommage perdu!";
			i = 6;
			std::cin.ignore();
		}
		else
		{
			
			std::cout << "Vide, ouf... allez au suivant" << std::endl;

		}

	}
	

	
}