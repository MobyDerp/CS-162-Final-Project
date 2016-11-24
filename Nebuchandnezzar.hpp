/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project - Space.hpp
 *********************************************************************/
#ifndef Nebuchandnezzar_HPP
#define Nebuchandnezzar_HPP
#include "Space.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Nebuchandnezzar : public Space
{
  protected:
    int phoneConnection;
    string namePlace;
    int visited;

  public:
    Nebuchandnezzar();
    ~Nebuchandnezzar();
    void setPhoneConnection();
    int getPhoneConnection();
    string getRoomName();
    void specialFunction();
    int getVisited();
    void setVisited();
    void reset();
};

#endif
