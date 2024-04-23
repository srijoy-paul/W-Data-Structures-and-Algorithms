class Solution
{

private:
    bool possible(vector<int> &bdArray, int day, int m, int k)
    {
        long long noofB = 0;
        int cnt = 0, n = bdArray.size();
        for (int i = 0; i < n; i++)
        {
            if (bdArray[i] <= day)
            {
                cnt++;
            }
            else
            {
                noofB += (cnt / k);
                cnt = 0;
            }
        }
        noofB += (cnt / k);
        return (noofB >= m);
    }

    pair<int, int> findMinHigh(vector<int> &bloomDay)
    {
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }
        return {mini, maxi};
    }

public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {

        if ((long long)m * (long long)k > bloomDay.size())
            return -1;
        pair<int, int> range = findMinHigh(bloomDay);
        int low = range.first;
        int high = range.second;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            bool isPossible = possible(bloomDay, mid, m, k);
            if (isPossible)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};