#ifndef manager_hpp
#define manager_hpp

#include "Product.hpp"
#include "Order.hpp"

class Manager
{
public:
    void addProduct(Product product);
    void executeOrder(Order order);
};

#endif