#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <string>
#include <vector>
#include "MenuItem.h"
using namespace std;

class Restaurant
{
private:
    static int idCounter;
    int restaurantID;
    string name;
    string location;
    vector<MenuItem> menu;

public:
    Restaurant(const string &name, const string &location)
    {
        // make the id autoincrement
        this->restaurantID = ++idCounter;
        this->name = name;
        this->location = location;
    }

    ~Restaurant()
    {
        cout << "Destroying Restaurant: " << this->name << " and clearing the menu" << endl;
        menu.clear();
    }

    string getName()
    {
        return this->name;
    }

    void setName(const string &name)
    {
        this->name = name;
    }

    string getLocation()
    {
        return this->location;
    }

    void setLocation(const string &location)
    {
        this->location = location;
    }
};

int Restaurant::idCounter = 0;
#endif
