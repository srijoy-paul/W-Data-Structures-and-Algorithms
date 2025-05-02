#include <iostream>
using namespace std;

int add(int &a, int &b, int &c)
{
    cout << a + b << endl;
    c = a + b;
    return 0;
}

int main()
{
    int a = 2;
    int x = 4, y = 3;
    int &b = a;
    cout << a << " " << b << endl;
    b = 3;
    cout << a << " " << b << endl;

    int addRes;
    add(x, y, addRes);
    cout << addRes;

    int v = 10;
    int w = 8;
    // int &u; //compile time error
    int &u = v;
    int &u = w; // runtime error redeclaration error
    return 0;
}