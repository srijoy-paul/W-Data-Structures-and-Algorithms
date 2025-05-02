#include <iostream>
using namespace std;

/**
 * virtual functions are used to implement run time polymorphism
 */

class A
{
public:
    void display()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    int display()
    {
        cout << "B" << endl;
        return 2;
    }
    // void getInfo()
    // {
    //     cout << "Nothing new" << endl;
    // }
};

int main()
{
    B b;
    cout << b.display() << endl;
    b.A::display();
    // b.getInfo();
}