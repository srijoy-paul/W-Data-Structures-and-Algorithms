// Hash Map Solution

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> StoTMap;
        unordered_map<char, char> TtoSMap;

        for (int i = 0; i < s.size(); i++)
        {
            char charS = s[i];
            char charT = t[i];

            if (StoTMap.find(charS) == StoTMap.end())
            {
                StoTMap[charS] = charT;
            }
            else if (StoTMap[charS] != charT)
            {
                return false;
            }

            if (TtoSMap.find(charT) == TtoSMap.end())
            {
                TtoSMap[charT] = charS;
            }
            else if (TtoSMap[charT] != charS)
            {
                return false;
            }
        }
        return true;
    }
};
// Hash Map Solution ends here