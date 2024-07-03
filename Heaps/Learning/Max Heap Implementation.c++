#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;
    int max_size;

public:
    MaxHeap(int s_)
    {
        arr = new int[s_];
        size = 0;
        max_size = s_;
    }

    void insert(int val)
    {
        if (size == max_size)
        {
            cout << "Heap Overflow" << endl;
            return;
        }

        arr[size] = val;
        int index = size;
        size++;

        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << "inserted" << endl;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void Heapify(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != index)
        {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
        return;
    }

    void delete_node()
    {
        if (size == 0)
        {
            cout << "Heap underflow";
            return;
        }

        cout << "deleted" << endl;
        arr[0] = arr[size - 1];
        size--;
        if (size == 0)
        {
            return;
        }
        Heapify(0);
        return;
    }
};

int main()
{
    MaxHeap h1(7);
    h1.insert(42);
    h1.insert(27);
    h1.insert(33);
    h1.insert(37);
    h1.insert(50);
    h1.insert(80);
    h1.insert(20);
    // h1.insert(100);
    h1.print();
}