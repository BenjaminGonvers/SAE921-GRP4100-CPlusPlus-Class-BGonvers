

#include <iostream>
#include <string>


struct Character {//add character this have a name, title, a planet of origine, a ship and a skill, the title and ship can be change in the adventurs

    std::string name;
    std::string forename;
    std::string title;
    std::string planet;
    std::string ship;
    std::string skill;

};

Character initCharacterCreation(std::string name_, std::string forename_, std::string title_, std::string planet_, std::string ship_, std::string skill_)
{
    Character initCharacter;

    initCharacter.name = name_;
    initCharacter.forename = forename_;
    initCharacter.title = title_;
    initCharacter.planet = planet_;
    initCharacter.ship = ship_;
    initCharacter.skill = skill_;

    return initCharacter;


}

Character initPlayerCharacterCreation()
{
    Character initCharacter;
    int playerChoice;
    bool errorPlayerChoice;


    std::cout << "alors vous avez besoin d'un prenom!" << std::endl;
    std::cin >> initCharacter.forename;
    std::cout << std::endl << "puis d'un nom de famille" << std::endl;
    std::cin >> initCharacter.name;
    initCharacter.title = "Comandant";
    std::cout << "bienvenu a bord " << initCharacter.title << " " << initCharacter.name << "!" << std::endl;
    std::cout << "il vous reste a choisire votre compétence et le nom de votre vaissaul" << std::endl;
    std::cout << "il y a 4 compétence disponible:\n1. Leadership\n2. Flight ACE\n3. ingener\n4. Métamorphe" << std::endl;
    do
    {
        std::cin >> playerChoice;
        errorPlayerChoice = false;

        switch (playerChoice)
        {
        case (1):
            initCharacter.skill = "Leadership";
            break;
        case (2):
            initCharacter.skill = "Flight ACE";
            break;
        case (3):
            initCharacter.skill = "Ingener";
            break;
        case (4):
            initCharacter.skill = "Metamorphe";
            break;
        default:
            std::cout << "veuillez choisire une valeurs valide" << std::endl;
            errorPlayerChoice = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }



    } while (errorPlayerChoice);

    return initCharacter;
}

void speechSarah() {


}

void speechPhil() {


}

void speechWhifghy() {


}

void speechIDK() {


}


int main()
{
    /*sarah Shepard, Born on planet Earth at 24 / 08 / 2087. Captain of the crusader ship The Explorer
    Phil spector, Born on planet Mars at 26 / 08 / 2038. Pilot of the H - Hunter n° 3434 - DFG
        Whifghy, the metamorph.Created  in Sector SD / F67.Child of the bioship Sxiot

    */

    //create caracter
    Character sarah = initCharacterCreation("Shepard", "Sarah", "captain", "earth", "the Explorer", "Leadership");
    Character phil = initCharacterCreation("Spector", "Phil", "pilot", "mars", "H-Hunter J-1014", "Flight Ace");
    Character wifghy = initCharacterCreation("", "Whifghy", "", "SD / F67", "Sxiot", "Metamorph");
    Character player;

    int playerChoice = 0;
    bool errorPlayerChoice;


    std::cout << "bienvenu!\nVeuillez choisire votre personnage:" << std::endl;

    std::cout << "1. Sarah Shepard\n2. Phil Spector\n3. Whifghy\n4. personalisé" << std::endl;

    do
    {
        errorPlayerChoice = false;


        std::cin >> playerChoice;

        switch (playerChoice)
        {
        case (1):
            player = sarah;
            break;
        case (2):
            player = phil;
            break;
        case (3):
            player = wifghy;
            break;
        case (4):
            player = initPlayerCharacterCreation();
            break;
        default:
            std::cout << "veuillez choisire une valeurs valide" << std::endl;
            errorPlayerChoice = true;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }

    } while (errorPlayerChoice);




}




