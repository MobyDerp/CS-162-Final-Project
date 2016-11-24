/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Source.hpp"
#include "Space.hpp"
#include "Matrix.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Source::Source()
{
  visited = 0;
  namePlace = "Source";
  phoneConnection = 0;
}

void  Source::setPhoneConnection()
{
  phoneConnection = 1;
}

int Source::getPhoneConnection()
{
  return phoneConnection;
}

string Source::getRoomName()
{
 return namePlace;
}

void Source::specialFunction()
{
  char opt;
  cout << "                                  ~*~*~*~*" << endl;
  cout<< "Architect: There are two doors. The door to your right leads to the Source and the salvation of Zion. ";
  cout<< "Architect: The door to your left leads back to the Source, to her and to the end of your species. ";
  cout <<"Architect: As you adequately put, the problem is choice." << endl;
  cout << "Architect: Which door will you choose? Enter (L) for left or (R) for right"<< endl;
  cout << "                                  ~*~*~*~*" << endl;
  cin>>opt;

  if(opt == 'L' || opt == 'l')
  {
    cout << "Architect: So you decided to rescue Trinity... say goodbye to Zion!" << endl;
    setDoorOption(opt);
    createMatrix();
  }
  else
  {
    cout <<"Architect: Now GO BACK to Zion and select 16 females & 7 males to restablish Zion " << endl;
    cout <<"Architect: This is 6th iteration of the MATRIX and it has ALWAYS been this way...";
    cout <<endl;
  }
  cout << endl;
}

int Source::getVisited()
{
  return visited;
}

void Source::setVisited()
{
  visited = 1;
}

void Source::setDoorOption(char option)
{
    DoorOption = option;
}

char Source::getDoorOption()
{
  return DoorOption;
}

void Source::createMatrix()
{
  cout << "You will step out into the matrix!" << endl;
}

void Source::reset()
{
  phoneConnection = 0;
  visited = 0;
}
