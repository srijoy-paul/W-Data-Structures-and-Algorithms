#ifndef observer_hpp
#define observer_hpp
#include <string>
// using namespace std;

class Observer
{

public:
    virtual void notified() = 0;
};

#endif