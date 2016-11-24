/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#ifndef FIGHTER_HPP
#define FIGHTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

class Fighter
{
  protected:


  public:
    virtual int attack()= 0;
    virtual void defend(int)= 0;
    virtual int attackRoll()=0;
    virtual int defendRoll()=0;
    virtual int getStrength()=0;
};

#endif
