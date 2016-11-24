/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Nebuchandnezzar.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Nebuchandnezzar::Nebuchandnezzar()
{
  visited = 0;
  namePlace = "Nebuchandnezzar";
  phoneConnection = 0;
}

void  Nebuchandnezzar::setPhoneConnection()
{
  phoneConnection = 1;
}

int Nebuchandnezzar::getPhoneConnection()
{
  return phoneConnection;
}

string Nebuchandnezzar::getRoomName()
{
 return namePlace;
}

void Nebuchandnezzar::specialFunction()
{
  cout << "                                  ~*~*~*~*" << endl;
  cout <<"Morpheus: That you are a slave, Neo. Like everyone else you were born into." << endl;
  cout <<"Morpheus: bondage. Into a prison that you cannot taste or see or touch. A prison" << endl;
  cout <<"Morpheus: for your mind. You have to let it all go, Neo. Fear, doubt, and disbelief. Free your mind. "<< endl;
  cout << "                                  ~*~*~*~*" << endl;
  cout << endl;
}

int Nebuchandnezzar::getVisited()
{
  return visited;
}

void Nebuchandnezzar::setVisited()
{
  visited = 1;
}

void Nebuchandnezzar::reset()
{
  phoneConnection = 0;
  visited = 0;
}
