/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project - Space.hpp
 *********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Space
{
  protected:

  public:
    virtual void setPhoneConnection()=0;
    virtual int getPhoneConnection()=0;
    virtual string getRoomName()=0;
    virtual void specialFunction()=0;
    virtual int getVisited()=0;
    virtual void setVisited()=0;
    virtual void reset()=0;
};

#endif
