#include "Product.hpp"
#include <string>
using namespace std;

string Product::getId()
{
    return this->id;
}

Product::Product(std::string id, int price, double wght, int qty, SIZE sz)
{
    this->id = id;
    this->price = price;
    this->weight = wght;
    this->quantity = qty;
    this->size = sz;
}

int Product::getQuantity() const
{
    return this->quantity;
}
void Product::setQuantity(int qty)
{
    this->quantity = qty;
}