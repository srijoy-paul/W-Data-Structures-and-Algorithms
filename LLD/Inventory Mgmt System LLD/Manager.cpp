#include "Manager.hpp"
#include "InventorySystem.hpp"
#include <iostream>
using namespace std;

void Manager::addProduct(Product product)
{
    // use the system addProduct method
    InventorySystem::addProduct(product);
}

void Manager::executeOrder(Order order)
{
    for (const auto &it : order.orderList)
    {
        Product *prodPtr = it.first;
        int totalQty = prodPtr->getQuantity();
        if (it.second < totalQty)
        {
            prodPtr->setQuantity(totalQty - it.second);
            order.orderList.erase(prodPtr);
        }
        else
            cout << "Not enough product available for" << prodPtr->getId() << endl;
        /**
         * the object has type qualifiers that are not compatible with the member function "Product::getQuantity"C/C++(1086)
          Manager.cpp(12, 22): object type is: const Product
          std::pair<const Product, int> it


          Reason: In a std::map<Product, int>, the keys (Product objects) are implicitly const.
         */
    }
}