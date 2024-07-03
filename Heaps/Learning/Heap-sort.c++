#include <bits/stdc++.h>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[index], arr[largest]);
        Heapify(arr, largest, n);
    }
}

void BuildMaxHeap(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    { // this is because leaf nodes can be eliminated
        Heapify(arr, i, n);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[i], arr[0]);
        Heapify(arr, 0, i);
    }
}

int main()
{
    int arr[] = {20, 30, 24, 19, 23, 17, 14, 18, 22, 15};
    BuildMaxHeap(arr, 10);
    heapSort(arr, 10);
    cout << "sorted array" << ": ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}