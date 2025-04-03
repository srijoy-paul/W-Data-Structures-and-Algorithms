#include "Unit.hpp"
std::string Unit::getLocationId()
{
    this->id;
}

std::string Unit::setLocationId(std::string loc)
{
    this->locationId = loc;
}

STATUS Unit::getStatus()
{
    return this->status;
}
void Unit::setStatus(STATUS st)
{
    this->setStatus(st);
}