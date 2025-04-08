#pragma once

#include <string>
#include <vector>
class DishAddOn
{
    std::string name;
    std::string descp;
    double price;
    bool isAvail;
    std::vector<std::string> images;

public:
    DishAddOn(std::string pName, double pPrice) : name(pName), price(pPrice) {}
    double getPrice() { return price; }
};