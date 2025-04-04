#ifndef product_hpp
#define product_hpp

#include <iostream>
#include <string>
#include "SizeEnum.hpp"

class Product
{
    std::string id;
    int price;
    std::string descp;
    double weight;
    int quantity;
    SIZE size;

public:
    Product(std::string id, int price, double wght, int qty, SIZE sz);
    virtual std::string getId();
    int getQuantity() const;
    void setQuantity(int qty);
};

#endif