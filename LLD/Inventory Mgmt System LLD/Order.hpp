#ifndef order_hpp
#define order_hpp

#include <map>
#include "Product.hpp"

class Order
{
    std::map<Product, int> orderList;
};

#endif