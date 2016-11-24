/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#ifndef NEO_HPP
#define NEO_HPP
#include "Fighter.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Neo: public Fighter
{
  protected:                     //reassign from private to protected
    string name;
    int strength;

  public:
    Neo();
    int getStrength();
    int attack();
    void defend(int);
    int attackRoll();
    int defendRoll();
};

#endif
