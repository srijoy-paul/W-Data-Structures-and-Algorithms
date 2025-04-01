#include "Observer.hpp"
#include <iostream>
void Observer::notified()
{
    std::cout << "notify";
}