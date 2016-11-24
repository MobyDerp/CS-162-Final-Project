/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Oracle.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void cookies();
void msleep(int);

Oracle::Oracle()
{
  visited = 0;
  namePlace = "Oracle";
  phoneConnection = 0;
}

void  Oracle::setPhoneConnection()
{
  phoneConnection = 1;
}

int Oracle::getPhoneConnection()
{
  return phoneConnection;
}

string Oracle::getRoomName()
{
 return namePlace;
}

void Oracle::specialFunction()
{
  char yOrN;
  cout << "                   *~*~*~*~*~" << endl;
  cout<< "Spoon boy: Do not try and bend the spoon. That's impossible. Instead... only try to realize the truth." << endl;
  cout<< " Neo: What truth?" << endl;
  cout<< " Spoon boy: There is no spoon." << endl;
  cout <<" Neo: There is no spoon?" << endl;
  cout << " Spoon boy: Then you'll see, that it is not the spoon that bends, it is only yourself." << endl;
  cout << "                   *~*~*~*~*~" << endl;
  cout << endl;
  cout <<"Oracle: Here, have a cookie, it will make you feel better."<<endl;
  cookies();
  cout <<"Will you eat this cookie, Neo? " << endl;
  cout <<"Enter Y for Yes or N for N" << endl;
  cin>>yOrN;
  eatCookie();
  msleep(500);
  cout << "Oracle: I'm not much of an oracle if I don't know..." << endl;
  cout << endl;
}

int Oracle::getVisited()
{
  return visited;
}

void Oracle::setVisited()
{
  visited = 1;
}

void Oracle::eatCookie()
{
  cout << endl;
  cout << "Neo: Do I have a choice as to wheter I eat the cookie?" << endl;
  cout << endl;
}

void Oracle::reset()
{
  phoneConnection = 0;
  visited = 0;
}
