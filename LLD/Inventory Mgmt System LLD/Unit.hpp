#ifndef unit_hpp
#define unit_hpp

#include <string>

enum class STATUS
{
    INVENTORY,
    INTRANSIT,
    DELIVERY
};

class Unit
{
    std::string productId;
    std::string locationId;
    std::string id;
    STATUS status;

public:
    virtual std::string getLocationId();
    virtual std::string setLocationId(std::string loc);
    virtual STATUS getStatus();
    virtual void setStatus(STATUS st);
};

#endif