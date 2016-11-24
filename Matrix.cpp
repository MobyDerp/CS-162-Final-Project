/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Matrix.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void heart();

Matrix::Matrix()
{
  visited = 0;
  namePlace = "Matrix";
  phoneConnection = 0;
}

void  Matrix::setPhoneConnection()
{
  phoneConnection = 1;
}

int Matrix::getPhoneConnection()
{
  return phoneConnection;
}

string Matrix::getRoomName()
{
 return namePlace;
}

void Matrix::specialFunction()
{
  cout << "        *~*~*~*~*~" << endl;
  cout << endl;
  cout<< "    Flying -- Flying --- Flying." << endl;
  cout << "         SAVES Trinity  " << endl;
  heart();
  cout << "         *~*~*~*~*~" << endl;
}

int Matrix::getVisited()
{
  return visited;
}

void Matrix::setVisited()
{
  visited = 1;
}

void Matrix::reset()
{
  phoneConnection = 0;
  visited = 0;
}
