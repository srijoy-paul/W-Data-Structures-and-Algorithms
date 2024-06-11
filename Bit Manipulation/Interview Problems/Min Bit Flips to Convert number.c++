class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        int temp = start ^ goal;
        int cnt = 0;
        while (temp > 1)
        {
            cnt += (temp & 1);
            temp = temp >> 1;
        }
        if (temp == 1)
        {
            cnt++;
        }
        return cnt;
    }
};