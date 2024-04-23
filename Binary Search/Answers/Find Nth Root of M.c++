// 0 when mid^n > m
// 1 when mid^n ==m
// 2 when mid^n <m

int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (ans * mid > m)
            return 0;
        ans *= mid;
    }
    if (ans == m)
        return 1;
    return 2;
}

int NthRoot(int n, int m)
{
    // Write your code here.
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = func(mid, n, m);
        if (value == 1)
            return mid;
        else if (value == 0)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}