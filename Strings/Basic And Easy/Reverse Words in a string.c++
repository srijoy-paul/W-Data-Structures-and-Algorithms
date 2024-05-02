class Solution
{
public:
    string reverseWords(string s)
    {
        string word = "";
        vector<string> res;
        for (int i = 0; i < s.size(); ++i)
        {
            char c = s[i];
            if (c != ' ')
            {
                word += c;
            }
            else
            {
                if (!word.empty())
                {
                    res.push_back(word);
                    word = "";
                }
            }
        }
        if (!word.empty())
        {
            res.push_back(word);
        }
        string resString = "";
        for (int eleIndx = res.size() - 1; eleIndx >= 0; --eleIndx)
        {
            resString += res[eleIndx];
            if (eleIndx != 0)
            {
                resString += ' ';
            }
        }
        return resString;
    }
};