class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {
        unordered_map<int, int> remCount;
        int pc = 0;
        for (auto hour : hours)
        {
            int rem = hour % 24;
            int leftHour = (24 - rem) % 24;
            if (remCount.find(leftHour) != remCount.end())
            {
                pc += remCount[leftHour];
            }
            remCount[rem]++;
        }
        return pc;
    }
};