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
};

int main()
{
    MaxHeap h1(7);
    h1.insert(42);
}