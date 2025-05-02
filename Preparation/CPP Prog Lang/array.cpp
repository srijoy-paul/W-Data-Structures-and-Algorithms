#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    int arr2[4] = {3, 6, 7};
    for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    int arr3[10] = {0};
    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    // 2d array
    int mat[2][2] = {1, 2, 3, 4};
    int mat3[2][2] = {{4, 6}, {5, 3}};
    for (int i = 0; i < sizeof(mat3) / sizeof(mat3[0]); i++)
    {
        for (int j = 0; j < sizeof(mat3[0]) / sizeof(mat3[0][0]); j++)
        {
            cout << mat3[i][j] << " ";
        }
        cout << endl;
    }
}