#include "common.hpp"
#include <vector>

class Dish
{
    string name;
    string descp;
    CUISINE cuisine;
    double price;
    vector<string> dishImgs;
    vector<DishAddOn *> addOns;
};