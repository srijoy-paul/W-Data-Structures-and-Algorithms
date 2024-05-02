class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string resString = "";
        int balance = 0;
        for (auto c : s)
        {
            if (c == '(')
            {
                if (balance > 0)
                {
                    resString += c;
                }
                balance++;
            }
            else
            {
                balance--;
                if (balance > 0)
                {
                    resString += c;
                }
            }
        }
        return resString;
    }
};