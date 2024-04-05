#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n, int i)
{
    if (i == n)
        return;
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        j--;
    }
    i++;
    insertion_sort(arr, n, i);
    return;
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
    int i = 0;
    insertion_sort(arr, n, i);

    for (auto ele : arr)
    {
        cout << ele << " ";
    }
}