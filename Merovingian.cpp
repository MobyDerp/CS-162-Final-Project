/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Merovingian.hpp"
#include "Space.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Merovingian::Merovingian()
{
  visited = 0;
  namePlace = "Merovingian";
  phoneConnection = 0;
}

void  Merovingian::setPhoneConnection()
{
  phoneConnection = 1;
}

int Merovingian::getPhoneConnection()
{
  return phoneConnection;
}

string Merovingian::getRoomName()
{
 return namePlace;
}

void Merovingian::specialFunction()
{
  cout << "                                  ~*~*~*~*" << endl;
  cout <<"Merovingian: Oh yes, it is true. The Keymaker, of course. But this is not a reason, this is not a why;" << endl;
  cout <<"Merovingian:the Keymaker himself, his very nature, is a means, not an end, and so to look for him is to be looking" << endl;
  cout <<"Merovingian:for a means to do...what?" << endl;
 cout << "                                  ~*~*~*~*" << endl;
  cout << endl;
}

int Merovingian::getVisited()
{
  return visited;
}

void Merovingian::setVisited()
{
  visited = 1;
}

void Merovingian::reset()
{
  phoneConnection = 0;
  visited = 0;
}
