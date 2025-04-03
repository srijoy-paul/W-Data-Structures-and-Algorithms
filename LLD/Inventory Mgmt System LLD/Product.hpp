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
    SIZE size;

public:
    virtual std::string getId();
};

#endif