class Solution
{
private:
    vector<int> arr;

public:
    void sieve()
    {
        arr.resize(n + 1);
        for (int i = 2; i <= n; i++)
            arr[i] = i;
        for (int i = 2; i * i <= n; i++)
        {
            if (arr[i] == i)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    if (arr[j] == j)
                    {
                        arr[j] = arr[i];
                    }
                }
            }
        }
    }
    vector<int> findPrimeFactors(int N)
    {
        vector<int> ans;
        if (N <= 1)
            return ans;
        sieve(N);
        while (N != 1)
        {
            ans.emplace_back(arr[N]);
            N = N / arr[N];
        }
        return ans;
    }
};