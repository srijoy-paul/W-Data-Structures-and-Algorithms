#pragma once
#include "common.hpp"

class IPartner
{
protected:
    string name;
    RATING rating;

public:
    IPartner(string pName) : name(pName)
    {
        rating = RATING::UNASSIGNED;
    }
    string getName()
    {
        return this->name;
    }
};