/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#ifndef AgentSmith_HPP
#define AgentSmith_HPP
#include "Fighter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class AgentSmith: public Fighter
{
  protected:                     //reassign from private to protected
    string name;
    int strength;

  public:
    AgentSmith();
    int getStrength();
    int attack();
    void defend(int);
    int attackRoll();
    int defendRoll();
};

#endif
