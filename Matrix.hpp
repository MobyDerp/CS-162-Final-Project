/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project - Space.hpp
 *********************************************************************/
#ifndef Matrix_HPP
#define Matrix_HPP
#include "Space.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Matrix : public Space
{
  protected:
    int phoneConnection;
    string namePlace;
    int visited;

  public:
    Matrix();
    //~Matrix();
    void setPhoneConnection();
    int getPhoneConnection();
    string getRoomName();
    void specialFunction();
    int getVisited();
    void setVisited();
    void reset();
};

#endif
