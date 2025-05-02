#include <iostream>
using namespace std;
class check
{
public:
    check()
    {
        cout << "Constructing an object of class check " << endl;
    }

    ~check()
    {
        cout << "Destructing the object of class check " << endl;
    }
};
int main()
{
    try
    {
        cout << "ha ha ha" << endl;
        check t1;
        throw 5;
        cout << "ya ya ya ya ya" << endl;
        cout << "ab ab abab " << endl;
    }
    catch (int i)
    {
        cout << "Caught " << i << endl;
    }
    cout << "Hey Hey Hey";
}