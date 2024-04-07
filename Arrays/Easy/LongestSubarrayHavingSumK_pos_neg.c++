// https://youtu.be/frf7qxiN2qU?t=1620

// Better approach (for +ve, both rem or sum should be +ve for this code) STARTS HERE
#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int n = a.size();
    long long sum = 0;
    int maxLen = 0;

    map<long long, int> prefixSumMpp;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (prefixSumMpp.find(rem) != prefixSumMpp.end())
        {
            int len = i - prefixSumMpp[rem];
            maxLen = max(len, maxLen);
        }

        prefixSumMpp[sum] = i;
    }

    return maxLen;
}

// Better approach (for +ve, both rem or sum should be +ve for this code) ENDS HERE

// Better approach which can handle positive and negatives both STARTS HERE

#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int n = a.size();
    long long sum = 0;
    int maxLen = 0;

    map<long long, int> prefixSumMpp;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (prefixSumMpp.find(rem) != prefixSumMpp.end())
        {
            int len = i - prefixSumMpp[rem];
            maxLen = max(len, maxLen);
        }
        if (prefixSumMpp.find(sum) == prefixSumMpp.end())
        {
            prefixSumMpp[sum] = i;
        }
    }

    return maxLen;
}

// Better approach which can handle positive and negatives both ENDS HERE