#pragma once
#include "ipartner.hpp"
#include <string>

class RestaurantOwner : public IPartner
{
public:
    RestaurantOwner(std::string pName) : IPartner(pName) {}
};