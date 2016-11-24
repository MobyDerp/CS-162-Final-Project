/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Item
{
  private:
    string itemName;

  public:
    Item();
    void setItemName(string);
    string getItemName();
};

#endif
