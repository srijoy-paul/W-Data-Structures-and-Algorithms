#include <bits/stdc++.h>
using namespace std;

long long findNcR(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    // first problem
    /**
     * int r, c;
     * cin >> r >> c;
     * int num = findNcR(r - 1, c - 1);
     * cout << num;
     */
    // first problem ends

    // second problem brute
    /** takes O(n*r) time
     * int row;
     * cin >> row;
     * for (int i = 1; i <= row; i++) {
     *   cout << findNcR(row - 1, i - 1) << " ";
     * }
     */
    // second problem brute ends

    // second problem optimal solution
    int row;
    cin >> row;
    int res = 1;
    cout << res << " ";
    for (int i = 1; i < row; i++)
    {
        res = res * (row - i);
        res /= i;
        cout << res << " ";
    }
    // second problem optimal solution ends
}