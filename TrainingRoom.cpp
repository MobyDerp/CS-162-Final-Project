/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "TrainingRoom.hpp"
#include "Space.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

TrainingRoom::TrainingRoom()
{
  visited = 0;
  namePlace = "TrainingRoom";
  phoneConnection = 0;
}

void  TrainingRoom::setPhoneConnection()
{
  phoneConnection = 1;
}

int TrainingRoom::getPhoneConnection()
{
  return phoneConnection;
}

string TrainingRoom::getRoomName()
{
 return namePlace;
}

void TrainingRoom::specialFunction()
{
  char yOrN;
  cout <<" Morpheus: That you are a slave, Neo. Like everyone else you were born into bondage. " << endl;
  cout <<" Morpheus: Into a prison that you cannot taste or see or touch. A prison" << endl;
  cout <<" Morpheus: for your mind. You have to let it all go, Neo. Fear, doubt, and disbelief. Free your mind. "<< endl;
  cout << "Morpehus: What are you waiting for?? "<< endl;
  cout <<"Are you ready to let it go? Enter Y for Yes or N for No" << endl;
  cin>> yOrN;
  while(yOrN == 'N' || yOrN == 'n')
  {
    cout <<"You need to let it go now!" << endl;
    cin>>yOrN;
  }
  cout << endl;
  cout <<"Neo: I know kung fu!" << endl;
}

int TrainingRoom::getVisited()
{
  return visited;
}

void TrainingRoom::setVisited()
{
  visited = 1;
}

void TrainingRoom::reset()
{
  phoneConnection = 0;
  visited = 0;
}
