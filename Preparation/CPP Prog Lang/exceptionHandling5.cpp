#include <iostream>
using namespace std;

class check1
{
public:
    check1()
    {
        cout << "Constructing an Object of class check1" << endl;
    }
    ~check1()
    {
        cout << "Destructing an Object the class check1" << endl;
    }
};

class check2
{
public:
    check2()
    {
        cout << "Constructing an Object of class check2" << endl;
        throw 5;
    }
    void getInfo()
    {
        cout << "check2 class" << endl;
    }
    ~check2()
    {
        cout << "Destructing the Object of class check2" << endl;
    }
};

int main()
{
    /**
     * In C++, when an exception is thrown during object construction, the destructor is only called for fully constructed objects. If an object has not finished construction, its destructor is never called.
     */
    try
    {
        check1 t1;
        check2 t2;
        t2.getInfo();
        check1 t3;
    }
    catch (int i)
    {
        cout << "Caught " << i << endl;
    }
}