#include <iostream>
using namespace std;

class SampleClass
{
public:
    static int x, y;

    int z;
    static void add()
    {
        cout << "Enter x and y" << endl;
        cin >> x >> y;
        cout << "X+Y= " << x + y << endl;

        // cin>>z;
    }
};

int SampleClass::x;
int SampleClass::y;

int main()
{
    SampleClass::add();
}