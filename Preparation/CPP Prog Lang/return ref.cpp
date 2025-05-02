#include <iostream>
using namespace std;

int &max(int &x, int &y)
{
    if (x > y)
        return x;
    return y;
}

int main()
{
    int a = 20;
    int b = 40;
    int &c = max(a, b);

    cout << "Value of C: " << c;
    c = 30;
    cout << "\nValue of A: " << a;
    cout << "\nValue of B: " << b << endl;

    return 0;
}