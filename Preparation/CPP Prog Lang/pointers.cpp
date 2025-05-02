#include <iostream>
#include <cmath>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void fun(int n, int *square, double *sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}

int main()
{
    // int a = 30;
    // int *ptr;
    // ptr = &a;

    // cout << *ptr << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // cout << *&a;

    // cout << ptr << endl;
    // cout << &ptr;

    int a = 2, b = 43;
    cout << "Before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << a << " " << b;

    int arr[] = {100, 200, 300, 400};
    // Compiler converts below to *(arr + 2).
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;

    int n = 4;
    int sq;
    double sqRoot;
    fun(n, &sq, &sqRoot);
    cout << sq << " " << sqRoot << endl;

    int nn = 2;
    int *dm = (int *)malloc(nn * 4);
    cout << "After dynamic allocation: " << *dm << " and " << *(dm + 1) << endl;
    *dm = 54;
    *(dm + 1) = 53;
    cout << *dm << " and " << *(dm + 1) << endl;

    int *temp = nullptr;
    // int temp=nullptr;
    cout << temp << endl;

    if (temp)
        cout << "true";
    else
        cout << "false";
}