#include <iostream>
using namespace std;

void bSort(int arr[], int n)
{
    if (n == 1)
        return;
    bool sortingNeeded = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            sortingNeeded = 1;
        }
    }
    if (sortingNeeded == 0)
        return;

    bSort(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bSort(arr, n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}