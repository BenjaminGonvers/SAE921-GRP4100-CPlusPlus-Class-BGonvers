

#include <iostream>// library input output standart
#include <random>// library random
#include <chrono>// library time


/* we need to use turn based fight
i probaly choose to use fonction, beacause all in the main is going to be a little messy
first i create the main that contain the first menu and the gestion of differant fight
*/

int GameEasy();
int GameHard();


int main()
{

    int playerChoiceDifficulty = 0;//value the player choose for the difficutly
    bool stopGame = false;//boolean value for stoping the game after one game(if the player went to stoping the game) true = stop
    bool continueGame = false;
    int playerRestart;


    while (!stopGame)
    {
        
        
        

        
        std::cout << "Bonjour, bienvenu a la chasse au monstre." << std::endl;// a litte speech for explaine and choose difficulty
        std::cout << "Nous, nous separerons en deux groupe!" << std::endl;
        std::cout << "Un pour la chasse aux gobelin, l'autre a l'ork" << std::endl;
        std::cout << "veuillez choisire votre chasse:\n1:gobelin(facile)\n2:ork(difficile)" << std::endl;
        
        
        while (!(playerChoiceDifficulty == 1 || playerChoiceDifficulty == 2))//litle thing for retry if the player give wrong value
        {

            std::cin >> playerChoiceDifficulty;
            std::cout << std::endl;

            if (playerChoiceDifficulty == 1)
            {
                GameEasy();

            }
            else if (playerChoiceDifficulty == 2)
            {
                GameHard();

            }
            else
            {
                std::cout << "Veuillez choisir une valeur correct : 1 ou 2" << std::endl;//say to the player who give the wrong value
                

            }
        }

        

        while (!(continueGame || stopGame))
        {
            std::cout << "fin de partie, en esperent que celas vous a plus." << std::endl;//some text for say the game is finish
            std::cout << "vous pouvez choisir entre relancer le jeux ou le quitté" << std::endl;
            std::cout << "1 : refaire une partie\n2 : quitté le programme" << std::endl;// ask to the player if he went to restart the game or quit
            std::cin >> playerRestart;

            if (playerRestart == 1)
            {
                continueGame = true;

            }
            else if (playerRestart == 2)
            {
                stopGame = true;
            }
            else
            {
                std::cout << "veuillez choisire une bonne valeurs entre 1 et 2";
            }
        }
        continueGame = false;//this is for reseting the bool if the player went to continue.
    }

    return EXIT_SUCCESS;
}

int GameEasy()
{
    int playerHitPoint = 30;//int value for player stats one for the HP and for damage dealing
    int playerDamageDeal = 5;

    int forestStep = 0;//int for know whers is the player
    int caveStep = 0;

    int numberPotion = 3;//invotory of the player
    int numberScroll = 1;

    int encounterValue = 0;//this value tell the encounter, if 0 first encounter occurs but normaly the generator don't give a 0
    
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();//creat a clock for the random generator
    std::default_random_engine seedGenerator(seed);// the famous generator
    std::uniform_int_distribution<int> generatorD100{ 1, 100 };// generator for create value between 1 and 100 for percentage(so french term)
    /*
    this generator are going to be useful for 2 thing:
    create encuter and define the "ai" of the mobs
    */
    std::cout << "La chasse au gobelin, ahah il faut commencer petit pour avencer!" << std::endl;//some text for tell to the player the choice it give
    std::cout << "Mais ne les sous estimer pas, même petits ils sont dangereux." << std::endl;//and the futur step it going to make
    std::cout << "Alors nous commencerons par la forêt, nous risquerons de trouver surtoup du gibier." << std::endl;
    std::cout << "Enfint du giber entrainer par des gobelin, c'est pas trés dangereux mais il faut faire attention." << std::endl;
    std::cout << "On y risque d'y rencontré 3 créature." << std::endl;
    std::cout << "Ensuite nous serons directement dans leurs grottes, la ça peus ce gater" << std::endl;
    std::cout << "En plus des gobelin, nous aurons a voyager dans leur labyrinte." << std::endl;
    std::cout << "Bon finit les discution, je vous donne 3 potion de soin ça vous seras utile, et un sort de flamme." << std::endl;//some object in game the player can use
    std::cout << "La potion de soin, passe de comentaire et le sort de flamme permet de tué une créature instentanément." << std::endl;
    std::cout << "Allez on y vas! forêt nous voici!" << std::endl;

    
    while (forestStep >= 3)
    {
        forestStep++;//tell one step in the forest

        encounterValue = generatorD100(seedGenerator);//create new encounter!combined whith the if below

        if (encounterValue <=30) //thats give a chance up to 30% to give this encounter(1 to 30)
        {


        }
        else // 70% for this encounter (31 to 100)
        {


        }
        

    }

    while (caveStep >= 4)
    {
        caveStep++;//tell one step in the forest

        encounterValue = generatorD100(seedGenerator);//create new encounter!combined whith the if below

        if (encounterValue <= 20) //thats give a chance up to 20% to give this encounter(1 to 20)
        {


        }
        else if(encounterValue <=50) // 30% for this encounter (21 to 50)
        {


        }
        else// 50% for this encounter (51 to 100)
        {


        }

    }

    return EXIT_SUCCESS;

}

int GameHard()
{

    return EXIT_FAILURE;

}