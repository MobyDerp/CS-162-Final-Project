/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Fighter.hpp"
#include "AgentSmith.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

AgentSmith::AgentSmith()
{
  strength = 8;
  name = "AgentSmith";
}

int AgentSmith::getStrength()
{
  return strength;
}

int AgentSmith::attack()
{
  return attackRoll();
}

void AgentSmith::defend(int OpponentAttackedPt)
{
  int damage;
  int defensePt = defendRoll();
  cout << "AgentSmith defense roll is: " << defensePt << endl;
  damage = OpponentAttackedPt - defensePt;
  if(damage < 0)
  {
    //do nothing
  }
  else
  {
    strength = strength - damage;
  }
  cout << "AgentSmith strength after attack is " << strength << endl;
}

int AgentSmith::attackRoll()   //Set so AgentSmith isn't as strong
{
  int roll1;
  int roll2;
  roll1 = rand() % 3 + 1;
  roll2 = rand() % 3 + 1;

  return (roll1+roll2);
}

int AgentSmith::defendRoll()   //1D6
{
  int roll1;
  roll1 = rand() % 6 + 1;
  return roll1;
}
