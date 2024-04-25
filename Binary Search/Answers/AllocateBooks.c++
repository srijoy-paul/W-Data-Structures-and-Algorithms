#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int> arr, int maxPages)
{
    int stud = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (pagesStudent + arr[i] <= maxPages)
        {
            pagesStudent += arr[i];
        }
        else
        {
            stud++;
            pagesStudent = arr[i];
        }
    }
    return stud;
}

int findPages(vector<int> arr, int n, int m)
{
    // Write your code here.
    if (m > n)
        return -1; // number of students are more than number of books
    int low = *(max_element(arr.begin(), arr.end()));
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int studCnt = countStudents(arr, mid);
        if (studCnt > m)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}