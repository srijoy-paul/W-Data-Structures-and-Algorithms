#ifndef inventorysystem_hpp
#define inventorysystem_hpp

#include "Product.hpp"
#include "Unit.hpp"
#include <map>

class InventorySystem
{
    static std::map<std::string, Product> productList;
    static std::map<std::string, Unit> locationList;

public:
    static void addProduct(Product product);
    static void placeUnit(Unit unit);
    static void removeUnit(Product prod);
    static std::map<std::string, Unit> getShelvesStatus();
};

#endif