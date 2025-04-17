#include "common.hpp"
#include "dishAddOn.hpp"
#include <vector>

class Dish
{
    string name;
    string descp;
    CUISINE cuisine;
    double price;
    vector<string> dishImgs;
    vector<DishAddOn *> addOns;

public:
    Dish(string pName, CUISINE pCuisine, double pPrice) : name(pName), cuisine(pCuisine), price(pPrice) {}

    void addAddon(DishAddOn *pAddOn)
    {
        addOns.push_back(pAddOn);
    }

    double getPrice()
    {
        double total = price;
        for (auto addOn : addOns)
        {
            total += addOn->getPrice();
        }
        return total;
    }
    string getDescription() { return this->descp; }
    string getDishName() { return this->name; }
    CUISINE getCuisine() { return this->cuisine; }
};