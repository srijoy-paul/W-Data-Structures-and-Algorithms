#pragma once
// #include ""
#include "restaurantOwner.hpp"
#include <string>
class Restaurant
{
    std::string name;
    bool isAvail;
    Menu menu;
    Location loc;
    RestaurantOwner owner;

public:
    Restaurant(string pName, RestaurantOwner pOwner, Location pLoc) : name(pName), owner(pOwner), loc(pLoc)
    {
        isAvail = false;
        menu = nullptr;
    }
    void addMenu(Menu *pMenu)
    {
        menu = pMenu;
    }
};