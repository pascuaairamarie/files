#include <iostream>
using namespace std;

int main()
{

// area
int areaChoice1, direction;
string cheese;

//stats
int str = 10, luck = 10, intel = 10, agil = 10, hp = 25;

//challenges
int catHP = 5, spiderHP = 8;
string attChoice, attChoice2;

cout << "         PROGRAMMING LOGIC AND DESIGN under Engr. Frank Anthony Chin"
     << "\n\n         This game is created by BSIE 1-5N:TEHchies group. \n"
     << "         Ang, Joselito"
     << "         Dela Torre, Audrey Paulline"
     << "         Magmayo, Erika Millen"
     << "         Pascua, Aira Marie \n\n";
cout << "\n"
     << "         ===================================================================================================\n"
     << "         ============================THE ADVENTURES OF DODI THE MOUSE=======================================\n"
     << "         ===================================================================================================\n\n\n";
cout
     << "               Dodi is a mouse who loves to eat cheese. \n"
     << "               He is inside the house that stores so much number of cheese.\n"
     << "               Help him to find these cheese. \n"
     << "               Search out the places and see suprises along the way. But be aware, your life may be in danger \n\n";

cout << "               Tips: your health, luck, intel, and agility has a corresponding values. \n"
     << "               As long as your HP is greater than the enemy, you win. \n\n";


     do{
        cout<< "             These are the rooms, where do you want to start? (It is reccomended to play the game\n"
            << "             according to its number (starting from 1 to 5) and to search each area)\n\n\n"
			<< "             1 - Attic\n"
			<< "             2 - Staircase\n"
			<< "             3 - Kitchen\n"
			<< "             4 - Dining room\n"
			<< "             5 - Dodi is tired he wants to take a rest\n\n\n"

			<< "             Choose among the numbers 1,2,3,4 or 5\n\n";
        cin >>areaChoice1;
        cout << "\n\n\n";

    switch (areaChoice1){
        case 1:
               cout << "                      Dodi is in the Attic, dusts are everywhere.\n"
                    << "                      He jumps, run and walk through these until \n"
                    << "                      he found a cheese! \n\n"

                    << "                      Go pick up the cheese, type yes or no. \n\n";
                    cin >> cheese;
                    cout << "\n\n";
                    if (cheese == "yes")
                    {
                    luck += 2;
                       cout <<"                Dodi gets the cheese and his luck adds 2.\n"
                            <<"                The luck of Dodi increase to " << luck << "\n\n";
                    }
                    else
                    {
                       cout << "               Dodi choose to ignore the cheese and left the attic.\n\n";
                       }

			   break;
        case 2:
               cout << "                        Dodi explicitly walk and run through the staircase\n"
                    << "                        he hope he is not seen by anybody or any creature in the house\n"
                       "                        Unfortunately, there are no anything in the staircase \n\n\n\n";

			   break;
        case 3:
               str += 3;
               luck += 2;
               intel += 6;
               agil += 10;

               cout << "                        Kitchen! Aha! Dodi smells a lot of cheese. \n"
                    << "                        He collected it all and ate it. \n"
                    << "                        But he must take care of himself because this is the very dangerous place for him. \n"
                    << "                        He then, see Dada, a mouse, a friend.  \n"
                    << "                        Dada joins the company of Dodi. \n"
                    << "                        Now that Dodi have a partner, his\n."
                    << "                        Stats will increase\n\n"
                    << "                        His stats are now: \n\n"
                    << "            <<<<<<<<<<<<<<<<<<<<<<<-------------------------\n"
                    << str << " Strength\n"
                    << luck << " Luck\n"
                    << intel << " Intelligence\n"
                    << agil << " Agility\n\n\n\n";

			   break;
    	case 4:
               cout << "                        Dodi search the Dining room if there is any cheese but then he found\n"
                       "                        nothing and he just left the place. \n\n";
			   break;
	   case 5:
               cout << "                        He wants to leave the door in the north part of the house\n"
                    << "                        with his new found friend\n\n\n\n\n";

        }
    }while (areaChoice1 !=5);

               cout << "                       As Dodi begin to leave the house, he hear some moaning sounds\n"
                    << "                       not far away from him. Until Dada was shocked and Dodi starts to asked why…\n"
                    << "                       Suddenly, a cat behind them appears\n"
                    << "                       Help Dodi to save himself and Dada. Choose between Run and Attack!\n"
                       "                       (Please enter 'run' or 'attack')\n\n";
               cout << "cat HP: " << catHP << "     The HP of Dodi: " << hp << "\n\n";

                    cin >> attChoice;

                    if (attChoice == "run")
                    {
                       if (agil > 10)
                          {
                               cout << "You both escape!\n";
                          }
                       else
                          {
                               cout << "You are both caught by the cat. Regardless of your HP. You lose.\n";
                          }
                    }
                    else
                        {
                          cout << "\t\t\t*________________________*\n"
                               << "\t\t\t      Cat Attacks     \n"
                               << "\t\t\t*________________________*\n\n\n"

                               << "\nDodi attacks the cat & do 5 damage\n\n";
                          catHP -= 5;
                          cout << "cat HP: " << catHP << "\n\n";
                          cout << "Cat now attacks Dodi and a number of 8 damages him.\n\n";
                          hp -= 8;
                          cout << "the HP of Dodi: " << hp << "\n\n";
                          cout << "Dodi attacks the cat & do 5 damage\n\n";
                          catHP -= 5;
                          cout << "cat HP: " << catHP << "\n\n"

                               << "After a hard fight, Dodi defeat the cat. This \n"
                               << "attack caused some damage and Dodi now have " << hp << " HP.\n\n";

                               do{
                          cout << "   \n\n      Now that Dodi and Dada are safe for now, help them to decide\n"
                               << "         which path of the house they will travelling:\n\n"
                               << "         1 - North\n"
                               << "         2 - South\n"
                               << "         3 - East\n"
                               << "         4 - West\n\n\n"
                               << "             Please enter 1,2,3 or 4.\n\n";

                      cin  >> direction;

    switch (direction){
                                      case 1: cout << "They begin to travel north. Where the door are located they \n"
                                                << "decide to walk out the house and let themselves be free from stress.\n";

                                            cout  << "\t\t\t*________________________*\n"
                                                   << "\t\t\t    End of the game      \n"
                                                   << "\t\t\t*________________________*\n\n\n\n";
                                              break;

                                      case 2: cout << "They begin to travel South. But then, this is the same staircase\n"
                                                   << "Dodi went in so they did not go back there.\n";
                                              break;

                                      case 3: cout << "They begin to walk East, where the backdoor is located. However, after a while of walking\n"
                                                   << "they were attacked by a spider.  \n"
                                                   << "Help them to decide whether the will use offense or defense? Offensive of defensive?\n\n";
                                                   cout << "spider HP: " << spiderHP << "     the HP of Dodi:" << hp << "\n\n";

                                                   cin >> attChoice2;

                                                   if (attChoice == "offensive")
                                                    {
                                                    cout << "\t\t\t*________________________*\n"
                                                    << "\t\t\t      Spider Attack     \n"
                                                    << "\t\t\t*________________________*\n\n\n"

                                                    << "\nDodi attack the spider & do 7 damage\n\n";
                                                    spiderHP -= 7;
                                                    cout << "spider HP: " << spiderHP << "\n\n";
                                                    cout << "The spider now attacks Dodi and does 11 damage\n\n";
                                                    hp -= 11;
                                                    cout << "the HP of Dodi: " << hp << "\n\n";
                                                    cout << "Dodi attack the spider & do 4 damage\n\n";
                                                    spiderHP -= 4;
                                                    cout << "spider HP: " << spiderHP << "\n\n"

                                                    << "After the encounter they continue their journey East. \n"
                                                    << "They got out of the house with the cheese they have and\n"
                                                    << "Will live without a stressful life.\n\n"
                                                    << "\t\t\t*________________________*\n"
                                                    << "\t\t\t      End of the game      \n"
                                                    << "\t\t\t*________________________*\n\n\n\n";
                                                                  }
                                                    else
                                                    {
                                                    cout << "\t\t\t*________________________*\n"
                                                    << "\t\t\t      Spider Attack     \n"
                                                    << "\t\t\t*________________________*\n\n\n"

                                                     << "\nDodi attacks the spider and do 5 damage\n\n";
                                                    spiderHP -= 5;
                                                    cout << "Spider HP: " << spiderHP << "\n\n";
                                                    cout << "The spider now attacks them and does 5 damage\n\n";
                                                    hp -= 5;
                                                    cout << "the HP of Dodi: " << hp << "\n\n";
                                                    cout << "Dodi attack the spider & do 5 damage\n\n";
                                                    spiderHP -= 5;
                                                    cout << "Spider HP: " << spiderHP << "\n\n"
                                                        << "After the encounter they continue their journey East. \n"
                                                        << "They got out of the house with the cheese they have and\n"
                                                        << "Will live without a stressful life.\n\n"
                                                        << "\t\t\t*________________________*\n"
                                                        << "\t\t\t      End of the game    \n"
                                                        << "\t\t\t*________________________*\n\n\n\n";
                                                    }
                                              break;
                                              case 4: cout << "They begin to travel West. However, they realise that there\n"
                                              << "is nothing to be found this way apart from the restroom and laundry room\n\n";
                                                           break;

                                              default:
				                              cout << "Incorrect entry.\n\n";
				                              break;

        }
	}while ((direction != 1 )& (direction !=3)) ;
                        }
return 0;

}
