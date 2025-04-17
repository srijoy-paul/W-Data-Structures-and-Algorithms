#include "dish.hpp"
class Menu
{
    vector<Dish *> dishes;

public:
    Menu(vector<Dish *> pDishes) : dishes(pDishes) {}
};