bool canWePlace(vector<int> &a, int dist, int cows, int n)
{
    int cntCow = 1, lastPos = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - lastPos >= dist)
        {
            cntCow++;
            lastPos = a[i];
        }
        if (cntCow >= cows)
        {
            return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls[n - 1] - stalls[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        bool pssble = canWePlace(stalls, mid, k, n);
        if (pssble)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}