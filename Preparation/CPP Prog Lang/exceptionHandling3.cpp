#include <iostream>
using namespace std;

class Base
{
};
class Derived : public Base
{
};

/**
 * C++ exception handling matches the first compatible catch block, in order.

Even though you're throwing a Derived, it can be caught by a Base &, and since the Base & catch comes first, the output will be:
 */

int main()
{
    try
    {
        throw Derived();
    }
    catch (Base &b)
    {
        cout << "Caught base exception" << endl;
    }
    catch (Derived &d)
    {
        cout << "Caught derived exception" << endl;
    }

    return 0;
}