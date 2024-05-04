class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> forS;
        unordered_map<char, int> forT;

        for (int i = 0; i < s.size(); i++)
        {
            forS[s[i]]++;
            forT[t[i]]++;
        }
        for (auto it = forS.begin(); it != forS.end(); it++)
        {
            char key = it->first;
            int valueS = it->second;

            if (forT.find(key) == forT.end())
            {
                return false;
            }
            int valueT = forT[key];
            if (valueS != valueT)
                return false;
        }

        return true;
    }
};