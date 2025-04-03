#ifndef inventorysystem_hpp
#define inventorysystem_hpp

#include "Product.hpp"
#include "Unit.hpp"
#include <map>

class InventorySystem
{
    std::map<std::string, Product> productList;
    std::map<std::string, Unit> locationList;

public:
    virtual void addProduct(Product product);
    virtual void placeUnit(Unit unit);
    virtual std::map<std::string, Unit> getShelvesStatus();
};

#endif