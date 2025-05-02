#include <iostream>
using namespace std;
/**
 * namespace ->
 * - it saves from conflict
 *
 * namespace syntax ->
 * namespace name{
 * properties, methods, classes to be defined under this namespace group
 * }
 */

namespace ns1
{
    int x = 2;
    void func()
    {
        cout << x;
    }
}

namespace ns2
{
    int x = 4;
    void func()
    {
        cout << x;
    }
}

namespace ns1c
{
    class Example
    {
    public:
        void display()
        {
            cout << "ns1c::Example::display()" << endl;
        }
    };
}

int main()
{
    ns1::func();
    cout << endl;
    ns2::func();

    // ns1c::Example ex=new ns1c::Example();
    ns1c::Example ex;
    ex.display();
}