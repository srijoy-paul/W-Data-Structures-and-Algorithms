#include "restaurantMgr.hpp"

RestaurantMgr *RestaurantMgr::restaurantMgrInstance = nullptr;
std::mutex RestaurantMgr::mtx;

RestaurantMgr *RestaurantMgr::getRestaurantMgr()
{
    if (restaurantMgrInstance == nullptr)
    {
        mtx.lock();
        if (restaurantMgrInstance == nullptr)
        {
        }
    }