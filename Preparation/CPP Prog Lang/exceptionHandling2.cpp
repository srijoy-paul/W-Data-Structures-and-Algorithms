#include <iostream>
using namespace std;

int main()
{
    // int a, b, c;
    // cin >> a >> b;

    try
    {
        // if (b == 0)
        // {
        // 	throw "Division by zero error";
        // }
        // c = a / b;
        // cout << c << endl;
        int *p = new int[1000000000];
        cout << "Memory Allocation is successful: ";
        delete[] p;
    }
    catch (const exception &msg)
    {
        cout << "Exception occured: " << msg.what() << endl;
    }
}