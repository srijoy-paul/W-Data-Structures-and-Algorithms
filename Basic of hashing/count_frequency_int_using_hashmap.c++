#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++; // hashmap created
    }

    int q;
    cin >> q;
    while (q--)
    {
        int qnum;
        cin >> qnum;

        cout << "Query " << qnum << " " << mpp[qnum] << endl;
    }
}