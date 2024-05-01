int upperBound(vector<int> &arr, int x, int n)
{
    // Write your code here.
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int cntSmallEqual(vector<vector<int>> &matrix, int n, int m, int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += upperBound(matrix[i], x, m);
    }
    return cnt;
}

int median(vector<vector<int>> &matrix, int n, int m)
{
    // Write your code here.
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m - 1]);
    }

    int req = (n * m) >> 1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int smallEqual = cntSmallEqual(matrix, n, m, mid);
        if (smallEqual <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}