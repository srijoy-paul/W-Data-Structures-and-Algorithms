class Solution
{
public:
    string largestOddNumber(string num)
    {
        int numInt;
        int index = -1;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            numInt = (int)num[i] - '0';
            if (numInt % 2 != 0)
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            return "";
        }
        else
        {
            return num.substr(0, index + 1);
        }
    }
};