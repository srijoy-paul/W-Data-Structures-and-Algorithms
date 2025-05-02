#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {21, 33, 65, 87, 59, 82};
    // arr++;
    for (int i = 0; i < 6; i++)
    {
        cout << *(arr + i) << " ";
    }
}