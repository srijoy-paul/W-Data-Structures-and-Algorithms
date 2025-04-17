#pragma once
#include <mutex>
#include <map>

#include "restaurant.hpp"

class RestaurantMgr
{
    RestaurantMgr() {};
    static RestaurantMgr *restaurantMgrInstance;
    static std::mutex mtx;
    std::map<std::string, Restaurant *> restaurantsMap;

public:
    static RestaurantMgr *getRestaurantMgr();
    void addRestaurant(string pRestaurantName, Restaurant *pRestaurant);
    Restaurant *getRestaurantMgr(string pRestaurantName);
};