#include <iostream>
#include "logger.hpp"
using namespace std;

int main()
{
    Logger *logger1 = Logger::getLogger();
    logger1->Log("Hi from user");
    Logger *logger2 = Logger::getLogger();
    logger2->Log("Hey I am user2");
    return 0;
}