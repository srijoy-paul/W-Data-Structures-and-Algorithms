class Solution
{
public:
    int maxDepth(string s)
    {
        int cnt = 0, maxCnt = 0;
        for (auto charc : s)
        {
            if (charc == '(')
            {
                cnt++;
                maxCnt = max(cnt, maxCnt);
            }
            else if (charc == ')')
                cnt--;
        }
        return maxCnt;
    }
};