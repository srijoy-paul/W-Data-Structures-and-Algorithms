class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == divisor)
            return 1;
        bool sign = true;
        if (dividend <= 0 && divisor > 0)
            sign = false;
        else if (dividend >= 0 && divisor < 0)
            sign = false;

        int n = abs(dividend);
        int d = abs(divisor);
        int quotient = 0;

        while (n >= d)
        {
            int cnt = 0;
            while (n >= d << (cnt + 1))
            {
                cnt++;
            }
            quotient = 1 << cnt;
            n -= d << (cnt + 1);
        }
        if (quotient == (1 << 31) && sign)
            return INT_MAX;
        if (quotient == (1 << 31) && !sign)
            return INT_MIN;

        return sign ? quotient : (-1 * quotient);
    }
};