/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Fighter.hpp"
#include "Neo.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

Neo::Neo()
{
  strength = 12;
  name = "Neo";
}

int Neo::getStrength()
{
  return strength;
}

int Neo::attack()
{
  return attackRoll();
}

void Neo::defend(int OpponentAttackedPt)
{
  int damage;
  int defensePt = defendRoll();
  cout << "Neo defense roll is: " << defensePt << endl;
  damage = OpponentAttackedPt - defensePt;
  if(damage < 0)
  {
    //do nothing
  }
  else
  {
    strength = strength - damage;
  }
  cout << "Neo strength after attack is " << strength << endl;
}

int Neo::attackRoll()   //2D6
{
  int roll1;
  int roll2;
  roll1 = rand() % 6 + 1;
  roll2 = rand() % 6 + 1;

  return (roll1 + roll2);
}

int Neo::defendRoll()   //2D6
{
  int roll1;
  int roll2;
  roll1 = rand() % 6 + 1;
  roll2 = rand() % 6 + 1;

  return (roll1 + roll2);
}
