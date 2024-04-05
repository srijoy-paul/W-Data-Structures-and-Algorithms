#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = low;
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] < arr[pivot] && i < high)
        {
            i++;
        }
        while (arr[j] > arr[pivot] && j > low)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i];
    arr[i] = arr[pivot];
    arr[pivot] = temp;
    return j;
}

void qs(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);
        qs(arr, low, partition_index - 1);
        qs(arr, partition_index + 1, high);
    }
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
    qs(arr, 0, n - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}