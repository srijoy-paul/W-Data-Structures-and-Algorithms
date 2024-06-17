class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long low = 0, high = (long long)sqrt(c);
        while (low <= high)
        {
            long long temp = (low * low) + (high * high);
            if (temp == c)
                return true;
            if (temp < c)
                low++;
            else
                high--;
        }
        return false;
    }
};