/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project - Space.hpp
 *********************************************************************/
#ifndef ORACLE_HPP
#define ORACLE_HPP
#include "Space.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Oracle : public Space
{
  protected:
    int phoneConnection;
    string namePlace;
    int visited;

  public:
    Oracle();
    ~Oracle();
    void setPhoneConnection();
    int getPhoneConnection();
    string getRoomName();
    void specialFunction();
    int getVisited();
    void setVisited();
    void eatCookie();
    void reset();

};

#endif
