/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/29/16
 ** Description: Final Project
 *********************************************************************/
#include "Fighter.hpp"
#include "Neo.hpp"
#include "AgentSmith.hpp"
#include "Item.hpp"
//#include "Backpack.hpp"
#include "Space.hpp"
#include "Nebuchandnezzar.hpp"
#include "TrainingRoom.hpp"
#include "Oracle.hpp"
#include "Merovingian.hpp"
#include "Source.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::string;
using std::numeric_limits;

void msleep(int);
int getInt();
int toosmall();
void fight(Fighter* a, Fighter* b);
void aircraft();
void key();
void spoon();
void neoPix();
void temple();
void pills();
void kitchen();
void optionsMenu();
void restaurant();
void kitchen();
void mainframe();
void heart();
bool isItemInBag(string name, Item xyz[], int);
void bed();

int main()
{
  unsigned seed;
  seed = time(0);
  srand(seed);
  int choice;
  Fighter *theOne;
  Fighter *agentSmith;
  int numMoves;
  numMoves = 1;
  Space* currentSpaceCurrentSpace;

  //menu for game
  while (!(choice == 3))
  {
    cout << "Hello! Welcome to this fantasy combat game. Your ‘universe’ contains "<< endl;
    cout << "the creatures in the table. Each will have characteristics for attack, "<< endl;
    cout << "defense, armor, and strength points." << endl;
    cout << "Please select the following from the menu" <<endl;
    cout << "1 - Start the Game" << endl;
    cout << "2 - Info on Objective of Game" << endl;
    cout << "3 - Exit out of Game" << endl;

    choice = getInt();
    while (choice < 0 || choice == 0 || choice > 3)
    {
      if(choice < 0 || choice == 0)
      {
        cout << "Choices must be a positive integer greater than 0" << endl;
        cin>>choice;
      }
      else
      {
        cout << "Choices must only be 1, 2, or 3" << endl;
        cin>>choice;
      }
    }

    if(choice == 1)
    {
      Neo Neil;
      theOne = &Neil;
      AgentSmith agent;
      agentSmith = &agent;
      cout << endl;
      cout << "This is your last chance. After this, there is no turning back. You take the blue pill -- the story ends," <<  endl;
      cout << "you wake up in your bed and believe whatever you want to believe. "<< endl;
      cout << "You take the red pill -- you stay in Wonderland and I show you how deep the rabbit hole goes."<< endl;
      cout << "What are you going to pick?" << endl;
      cout << "Enter (1) for Red pill" << endl;
      cout << "Enter (2) for Blue pill" << endl;
      pills();
      int pill;
      pill = getInt();
      while (pill < 0 || pill == 0 || pill > 2)
      {
        if(pill < 0 || pill == 0)
        {
          cout << "Choices must be a positive integer greater than 0" << endl;
          cin>>pill;
        }
        else
        {
          cout << "Choices must only be 1 or 2" << endl;
          cin>>pill;
        }
      }
      cout << endl;

      if(pill == 1)
      {
        cout << "You choose the red pill. Neo, your questions will be answered!"  << endl;
        cout << endl;
      }
      else
      {
        cout << "Neo, you will wake up in your own bed and nothing has changed."  << endl;
        bed();
        return 0;
      }

      Space* currentSpace;
      Space* space1;
      Space* space2;
      Space* space3;
      Space* space4;
      Space* space5;

      Item bag[5];
      int arrayEnd = 0;

      space1 = new Nebuchandnezzar;
      space2 = new TrainingRoom;
      space3 = new Oracle;
      space4 = new Merovingian;
      space5 = new Source;
      currentSpace = space1;
      currentSpaceCurrentSpace = currentSpace;

      //"The "time" for this game is 6 moves --> anything more than that will mean that the game hasn't reach a conclusion.
      while(!(currentSpace->getRoomName() == "Source" && currentSpace->getVisited()==1) && theOne->getStrength()>0 && numMoves < 7 )
      {
        msleep(500);
        char yOrN;
        cout<< endl;
        cout << "                    --------------" << endl;
        cout << "Where am I? You are at: " << currentSpace->getRoomName() << "."<< endl;
        cout << "                    --------------" << endl;
        cout << endl;
        if(currentSpace->getRoomName() == "Nebuchandnezzar" && currentSpace->getVisited()==0)
        {
          aircraft();
          msleep(600);
          currentSpace->specialFunction();
          Item knowledge;
          msleep(500);
          knowledge.setItemName("knowledge");
          bag[arrayEnd] = knowledge;
          arrayEnd++;
          cout << "you have acquired the following here: " << endl;
          cout << knowledge.getItemName()<< endl;
          currentSpace->setVisited();
          cout << endl;
        }
        else if (currentSpace->getRoomName() == "TrainingRoom" && currentSpace->getVisited()==0)
        {
          temple();
          msleep(500);
          currentSpace->specialFunction();
          msleep(500);
          Item combat;
          combat.setItemName("combat_training");
          bag[arrayEnd] = combat;
          arrayEnd++;
          cout << "you have acquired the following here: " << endl;
          cout << combat.getItemName()<< endl;
          currentSpace->setVisited();
          cout << endl;
        }
        else if (currentSpace->getRoomName() == "Oracle" && currentSpace->getVisited()==0)
        {
          kitchen();
          msleep(500);
          currentSpace->specialFunction();
          msleep(500);
          Item theSpoon;
          theSpoon.setItemName("spoon");
          bag[arrayEnd] = theSpoon;
          arrayEnd++;
          cout << "you have acquired the following here: " << endl;
          cout << theSpoon.getItemName() << endl;
          currentSpace->setVisited();
          spoon();
          cout << endl;
        }
        else if(currentSpace->getRoomName() == "Merovingian" && currentSpace->getVisited()==0)
        {
          restaurant();
          msleep(600);
          currentSpace->specialFunction();
          msleep(600);
          Item theKey;
          theKey.setItemName("key");
          bag[arrayEnd] = theKey;
          arrayEnd++;
          cout << "you have acquired the following here: " << endl;
          cout << theKey.getItemName() << endl;
          currentSpace->setVisited();
          key();
          cout << endl;
        }
        else if(currentSpace->getRoomName() == "Source" && currentSpace->getVisited()==0)
        {
          mainframe();
          msleep(700);
          Item theHeart;
          currentSpace->specialFunction();
          msleep(700);
          if(static_cast<Source*>(currentSpace)->getDoorOption() == 'L' || static_cast<Source*>(currentSpace)->getDoorOption() == 'l')
          {
            theHeart.setItemName("heart");
            bag[arrayEnd] = theHeart;
            arrayEnd++;
            cout << "you have acquired the following here: " << endl;
            cout << theHeart.getItemName() << endl;
                      heart();
          }
          currentSpace->setVisited();
          cout << endl;
        }
        else
        {
          cout <<"you have already visited this room + acquired the item -- Please ";
          cout <<"select a room that you haven't visited" << endl;
        }

        cout << "What is my phone connection? " << currentSpace->getPhoneConnection() << endl;
        cout << "Do you want to establish phone connection to exit? Enter:Y or N." << endl;
        cin >>yOrN;
        while(yOrN== 'n' || yOrN == 'N')
        {
          cout << "Not establishing a connection means it'll be game over; Establish Conenction now!" << endl;
          cin>>yOrN;
        }
       if(yOrN == 'y' || yOrN =='Y')
       {
         cout << "Connecton Establish... Where to next??" << endl;
         currentSpace->setPhoneConnection();
       }

      fight(theOne, agentSmith);

      cout << endl;
      currentSpace->setPhoneConnection();
      if(currentSpace->getRoomName()=="Source" && (currentSpace->getVisited()==1))
      {
        //nothing
      }
      else
      {
        optionsMenu();
        cin>>choice;
        switch(choice)
        {
          case 1:
            currentSpace = space1;
            break;

          case 2:
            currentSpace = space2;
            break;

          case 3:
            currentSpace = space3;
            break;

          case 4:
            currentSpace = space4;
            break;

          case 5:
            currentSpace = space5;
            break;
        }
        if(currentSpace->getRoomName() == "Oracle" && !(isItemInBag("knowledge", bag, arrayEnd)
                &&isItemInBag("combat_training", bag, arrayEnd)))
        {
          cout <<"You must go back to the Training Room to get your combat training!" << endl;
              cout << "       --------" << endl;
          cout <<"you are being sent to the TRAINING ROOM now." << endl;
                      cout << "     --------" << endl;
          currentSpace =space2;
        }
        else if (currentSpace->getRoomName() == "Merovingian" && !(isItemInBag("knowledge", bag, arrayEnd)
                &&isItemInBag("combat_training", bag, arrayEnd) && isItemInBag("spoon", bag, arrayEnd)))
        {
          if(!isItemInBag("combat_training", bag, arrayEnd))
          {
            cout << "You go get combat training first before you can even get anywhere since you will" << endl;
            cout <<"defend yourself against the almighty Agent Smith!" << endl;
            cout << "        --------" << endl;
            cout <<"You are being sent to TRAINING ROOM now." << endl;
            cout << "      --------" << endl;
            currentSpace = space2;
          }
          else
          {
            cout <<"You must go to the Oracle to get your spoon!" << endl;
            cout << "      --------" << endl;
            cout<<"You are being sent to the ORACLE now." << endl;
            cout << "      --------" << endl;
            currentSpace = space3;

          }
        }
        else if (currentSpace->getRoomName() == "Source" && !(isItemInBag("knowledge", bag, arrayEnd)
                &&isItemInBag("combat_training", bag, arrayEnd) && isItemInBag("spoon", bag, arrayEnd)
                && isItemInBag("key", bag, arrayEnd)))
        {
          if(!isItemInBag("combat_training", bag, arrayEnd))
          {
            cout << "You go get combat training first before you can even get anywhere since you will" << endl;
            cout <<"NEED to defend yourself against the almighty Agent Smith! Otherwise, it's a suicide!" << endl;
            cout << "        --------" << endl;
            cout <<"You are being sent to the TRAINING ROOM now." << endl;
            cout << "      --------" << endl;
            currentSpace = space2;
          }
          else if (!(isItemInBag("spoon", bag, arrayEnd)))
          {
            cout <<"You must go to the Oracle to get your spoon!" << endl;
            cout << "      --------" << endl;
            cout<<"You are being sent to the ORACLE now." << endl;
            cout << "      --------" << endl;
            currentSpace = space3;
          }
          else
          {
            cout <<"You must go to the Merovingian to get your key to unlock the Source!" << endl;
            cout << "      --------" << endl;
            cout<<"You are being sent to MEROVINGIAN now." << endl;
            cout << "      --------" << endl;
            currentSpace = space4;
          }
        }
        //cout <<"currentSpace name: " << currentSpace->getRoomName() << endl;
        cout <<"Do you want see the items in your bag?  Enter Y or N: "<< endl;
        cin>> yOrN;
        if(yOrN == 'y'|| yOrN == 'Y')
        {
          cout << "The items in your possessions are: " << endl;
          for(int i = 0; i < arrayEnd; i++)
            cout << (i+1) << " : " << bag[i].getItemName() << endl;
          cout << endl;
        }
      }
      //cout << "numMoves: " << numMoves;
      numMoves++;
    }
      cout<< endl;
      if (numMoves > 6)
      {
        cout << "oO The number of moves exceeded the maximum number of moves allowed Oo "  << endl;
        cout << "Play - again.";
        cout << endl;
      }
      else
      {
        if(dynamic_cast<Source*>(currentSpace)->getDoorOption() == 'l' ||  dynamic_cast<Source*>(currentSpace)->getDoorOption() == 'L')
        {
          msleep(600);
          currentSpace = NULL;
          currentSpace = new Matrix;
          cout<< endl;
          cout << "                    --------------" << endl;
          cout << "Where AM I now? You are at: " << currentSpace->getRoomName() << "."<< endl;
          cout << "                    --------------" << endl;
          msleep(500);
          currentSpace->specialFunction();
          cout <<" The Oracle have predicted that you will save Trinity and save human kind!  What a winner!" <<endl;
          cout <<" ***  WIN ***";
          cout << endl;
        }
        else
        {
          msleep(600);
          cout <<"The Oracle played with fire --> She didn't realize that LOVE couldn't conquer ALL" << endl;
          cout <<"Mankind will now parish! and the war between the humans and the machine will continue on!" << endl;
        }
      }
      //resetting to replay game
      space1->reset();
      space2->reset();
      space3->reset();
      space4->reset();
      space5->reset();
      numMoves = 1;
    }
    else if (choice == 2)
    {
      cout << endl;
      cout << "                                             *~*~*~*~*" << endl;
      cout << endl;
      cout << "User will be allowed to have Neo choose the red or blue pill.  If Neo takes the red pill, he will be “rescued” to" << endl;
      cout << "Nebuchadnezzar spacecraft.  During the game, he will be visiting the 1) training room (learning combat training)" <<endl;
      cout << "2) the Oracle to seek the answer 3) Merovingian and 4) the Source (to see the Architecture). He will be battling Mr. Smith" << endl;
      cout << "along the way in each of the spaces. Hopefully, he does not die; otherwise, it is game over." << endl;
      cout << "Neo is about to go in and out of each room multiple times.  However, the ideal sequence is: "  << endl;
      cout << "                    Nebuchadnezzar -> Training Room -> Oracle -> Merovingian -> Source."  << endl;
      cout << "There are prompts as to which items are needed.  Ultimately, Neo must have the key to go to the source." << endl;
      cout << endl;
      cout << "The objective is to see whether Neo will choose to do the following when he’s at the source with the Architecture:" << endl;
      cout << "       * Return to the Source to reboot the Matrix;" << endl;
      cout << "       * Save Trinity" << endl;
      cout << endl;
      cout <<"But, remember what the Oracle said, You've already made the choice, now you have to understand it." << endl;
      cout << endl;
      cout << "                                             *~*~*~*~*" << endl;
      cout << endl;
    }

    if (numMoves > 6)
    {
      cout << "oO The number of moves exceeded the maximum number of moves allowed Oo "  << endl;
      cout << "Play - again.";
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}

int getInt()
{
 	int x;
 	while(!(cin >> x))
  {
 		cin.clear();
 		cin.ignore(numeric_limits<streamsize>::max(),'\n');
 		cout << "Invalid input.  Try again! Input must be integers.\n";
 	}
 	return x;
}

int toosmall()
{
  cout << "Invalid input. Please enter a positive integer.  Must be greater than 0.\n " ;
  int x = getInt();
  while(x < 0 || x == 0)
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Invalid input.  Try again! Must larger a positive number\n";
    x = getInt();
  }
  return (x);
}

void fight(Fighter* a, Fighter* b)
{
  cout << endl;
  cout << "Whoaaaaaoh ohhhh!  There has to be a fight before Neo can escape.  O.O  He just ran into Agent Smith!" << endl;
  cout << endl;
  string opponent1 = "Neo";
  string opponent2 = "Agent Smith";
  int round = 1;
  while( a->getStrength() != 0 && b->getStrength() !=0)
  {
    cout << "This is round: " << round << endl;
    cout << "--------------------" << endl;
    int Opponent1Attack = a->attack();
    cout << opponent1 << "'s attack is: " << Opponent1Attack << endl;
    b->defend(Opponent1Attack);
    if( b->getStrength() == 0 || b->getStrength() <0 )
    {
      break;
    }

    int Opponent2Attack = b->attack();
    cout << opponent2 << "'s attack is: " << Opponent2Attack << endl;

    a->defend(Opponent2Attack);
    if( a->getStrength() == 0 ||  a->getStrength() <0 )
    {
      break;
    }
    round = round + 1;
    cout << endl;
    msleep(500);
  }
  cout << endl;
  if(a->getStrength() ==0 || a->getStrength() < 0 )
  {
    cout << "whomp whomppp =(  Neo died.  Victory for Agent Smith ";
  }
  else
  {
    cout << "Neo was able to escape " << opponent2 << ".  That was a close call!";
  }
  cout << endl;
}

void msleep(int s)
{
  usleep(s*1000);
}

void optionsMenu()
{
  cout << "Which rooms would you like to be in? Please enter the following to select: "<< endl;
  cout << "1 - Nebuchadnezzar " << endl;
  cout << "2 - Training_Room " << endl;
  cout << "3 - The_Oracle " << endl;
  cout << "4 - Merovingian" << endl;
  cout << "5 - The_Source "<< endl;
}

bool isItemInBag(string name, Item xyz[], int y)
{
  for(int k=0; k < y; k++)
  {
    if(name == xyz[k].getItemName())
    {
      return true;
    }
  }
  return false;
}
