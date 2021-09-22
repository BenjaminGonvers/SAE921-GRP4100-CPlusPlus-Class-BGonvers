

#include <iostream>

void SeeAnimal();

enum class Animal
{
    Bee,
    Dog,
    Donkey,
    Dove,
    Cat,
    Chicken,
    Parrot,
    Pig,
    Rabbit,
    Sheep,
    Cow,
    Deer,
    Duck,
    Fish,
    Goat,
    Horse,
    Turkey,
    listMax

};

int listeningAnimal(Animal);

int main()
{
    int userChoice;

    std::cout << "good morning in the interactive zoo!" << std::endl;
    std::cout << "what you want today?" << std::endl;
    do
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "1. see the list of the animal" << std::endl;
        std::cout << "2. hear the animal" << std::endl;
        std::cout << "3. exit the zoo" << std::endl;
        std::cin >> userChoice;
        if (userChoice == 1)
        {
            SeeAnimal();
        }
        if (userChoice == 2)
        {

            std::cout << "what is the animal you went to hear?" << std::endl;
            std::cin >> userChoice;

            listeningAnimal(static_cast<Animal>(userChoice));
            userChoice = 0;
        }



    } while (!(userChoice == 3));
}

void SeeAnimal()
{
    
    
    std::cout << "Bee\nDog\nDonkey\nDove\nCat\nChicken\nParrot\nPig\nRabbit\nSheep\nCow\nDeer\nDuck\nFish\nGoat\nHorse\nTurkey" << std::endl;
    

}

int listeningAnimal(Animal Animal_)
{

    int userChoice;
    int exit;

    
        switch (Animal_)
        {
        case Animal::Bee:
            std::cout << "Bzzzzz..." << std::endl;
            break;
        case Animal::Dog:
            std::cout << "Wouaf Wouaf..." << std::endl;
            break;
        case Animal::Donkey:
            std::cout << "really i don't know" << std::endl;
            break;
        case Animal::Dove:
            std::cout << "Roucoul... " << std::endl;
            break;
        case Animal::Cat:
            std::cout << "Miaou Miaou..." << std::endl;
            break;
        case Animal::Chicken:
            std::cout << "Cot Cot Cot..." << std::endl;
            break;
        case Animal::Parrot:
            std::cout << "Same as you" << std::endl;
            break;
        case Animal::Pig:
            std::cout << "Groink Groink..." << std::endl;
            break;
        case Animal::Rabbit:
            std::cout << "..." << std::endl;
            break;
        case Animal::Sheep:
            std::cout << "Bheeeeeee...." << std::endl;
            break;
        case Animal::Cow:
            std::cout << "Mheu..." << std::endl;
            break;
        case Animal::Deer:
            std::cout << "i don't know" << std::endl;
            break;
        case Animal::Duck:
            std::cout << "Coin coin.." << std::endl;
            break;
        case Animal::Fish:
            std::cout << "bloup.. bloup i guess" << std::endl;
            break;
        case Animal::Goat:
            std::cout << "same as the sheep" << std::endl;
            break;
        case Animal::Horse:
            std::cout << "Horse_Sound.mp3" << std::endl;
            break;
        case Animal::Turkey:
            std::cout << "turkish or turkey?" << std::endl;
            break;
        case Animal::listMax:
            std::cout << "bipbipboup" << std::endl;
            break;
        default:
            std::cout << "ERRORS NOT FOUND" << std::endl;
            break;
        }

        return EXIT_SUCCESS;
}