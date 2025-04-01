#include "Observer.hpp"
#include <iostream>
using namespace std;

class Subscriber : public Observer
{
public:
    int id;
    string name;
    Subscriber(string name)
    {
        this->name = name;
    }
    void notified()
    {
        cout << "new Video uploaded" << endl;
    }
};