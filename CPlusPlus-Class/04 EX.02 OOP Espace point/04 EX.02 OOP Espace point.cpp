
#include <iostream>
#include "point.h"

void errorEntry();

int main()
{
	int posAxeX;
	int posAxeY;
	std::cout << "Bonjour, nous allons crée deux point." << std::endl;
	std::cout << "nous avons besoin déjas d'une abscisse du premier point(axe Y)" << std::endl;
	std::cout << "celui doit étre comprit entre -100 et 100." << std::endl;
	std::cin >> posAxeX;
	std::cout << "\nEnsuite l'ordonnée (axe Y)" << std::endl;
	std::cout << "il doit aussi ce trouver entre - 100 et 100" << std::endl;
	std::cin >> posAxeY;
	point firstPoint(posAxeX, posAxeY);
	std::cout << "\nIdem pour le segond point" << std::endl;
	std::cout << "en premiers l'abscisse:" << std::endl;
	std::cin >> posAxeX;
	std::cout << "\nen segond l'ordonnée" << std::endl;
	std::cin >> posAxeY;
	point segondPoint(posAxeX, posAxeY);

	bool finish = false;
	int playerChoice = 0;
	do
	{

		std::cout << "\nAlors que voulez vous faire?" << std::endl;
		std::cout << "1. Connaitre la position actuel des points" << std::endl;
		std::cout << "2. Changer la position des points" << std::endl;
		std::cout << "3. connaitre la distance entre les deux points" << std::endl;
		std::cout << "4. connaitre la moyenne entre les deux points" << std::endl;
		std::cout << "5. Sortire du programme" << std::endl;
		std::cin >> playerChoice;
		std::cout << std::endl;

		switch (playerChoice)
		{
		case 1:
			std::cout << "le premier point ce trouve en X = " << firstPoint.tellPosX() << " et en Y = " << firstPoint.tellPosY() << std::endl;
			std::cout << "le segond ce trouve en X = " << segondPoint.tellPosX() << " et en Y = " << segondPoint.tellPosY() << std::endl;
			break;
		case 2:
			int transX;
			int transY;
			do {
				std::cout << "vous voulez changer la position de quel point?\n1. premier\n2. segond" << std::endl;
				std::cin >> playerChoice;
				std::cout << std::endl;
				if (!(playerChoice == 1) && !(playerChoice == 2)){
					errorEntry();
				}
			} while (!(playerChoice == 1) && !(playerChoice == 2));
			
			std::cout << "veuillez indiquer la translation désirée de l'abscisse (Axe X)." << std::endl;
			std::cin >> transX;
			std::cout << "\nMaintenent veuillez indiquer la translation desirée de l'ordonnée(Axe Y)" << std::endl;
			std::cin >> transY;
			if (playerChoice == 1){
				firstPoint.ChangePosX(transX);
				firstPoint.ChangePosY(transY);
			}
			else if (playerChoice == 2) {
				segondPoint.ChangePosX(transX);
				segondPoint.ChangePosY(transY);
			}
			break;
		case 3:
			std::cout << "en construction" << std::endl;
			break;
		case 4:
			std::cout << "en construction" << std::endl;
			break;
		case 5:
			finish = true;
			break;
		default:
			errorEntry();
			break;
		}

	} while (!finish);


}


void errorEntry() {

	std::cout << "veuillez entrer une valeurs correct" << std::endl;
	std::cout << "enter pour continuer" << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.ignore();
}