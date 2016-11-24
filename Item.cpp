/*********************************************************************
 ** Author: Lisa T. Le
 ** Date: 5/28/16
 ** Description: Final Project
 *********************************************************************/
#include "Item.hpp"
#include <iostream>
#include <cmath>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

Item::Item()
{
  itemName = "string";
}

void Item::setItemName(string x)
{
  itemName = x;
}

string Item::getItemName()
{
  return itemName;
}
