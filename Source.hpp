/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project - Space.hpp
 *********************************************************************/
#ifndef SOURCE_HPP
#define SOURCE_HPP
#include "Space.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Source : public Space
{
  protected:
    int phoneConnection;
    string namePlace;
    int visited;
    char DoorOption;

  public:
    Source();
    ~Source();
    void setPhoneConnection();
    int getPhoneConnection();
    string getRoomName();
    void specialFunction();
    int getVisited();
    void setVisited();
    void setDoorOption(char);
    char getDoorOption();
    void createMatrix();
    void reset();
};

#endif
