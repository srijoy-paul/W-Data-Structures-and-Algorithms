#include "InventorySystem.hpp"
#include <map>
using namespace std;

void InventorySystem::addProduct(Product product)
{
    productList.emplace(product.getId(), product);
}

void InventorySystem::placeUnit(Unit unit)
{
    unit.setLocationId("");
}

map<std::string, Unit> InventorySystem::getShelvesStatus()
{
    return InventorySystem::locationList;
}