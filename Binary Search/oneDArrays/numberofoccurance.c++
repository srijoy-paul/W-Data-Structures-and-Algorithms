#include <bits/stdc++.h>
using namespace std;

int firstOccur(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int lastOccur(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
pair<int, int> searchRange(vector<int> &arr, int n, int k)
{
    // int n = arr.size();
    int first = firstOccur(arr, n, k);
    if (first == -1)
        return {-1, -1};
    return {first, lastOccur(arr, n, k)};
}

int count(vector<int> &arr, int n, int x)
{
    // Write Your Code Here
    pair<int, int> range = searchRange(arr, n, x);
    if (range.first == -1)
        return 0;
    return (range.second - range.first + 1);
}
