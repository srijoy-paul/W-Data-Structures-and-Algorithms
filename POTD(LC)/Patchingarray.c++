class Solution
{
public:
    int minPatches(vector<int> &nums, int n)
    {
        long long x = 0;
        int patches = 0;

        int i = 0;
        while (x < n)
        {
            if (i < nums.size() && nums[i] <= (x + 1))
            {
                x += nums[i];
                i++;
            }
            else
            {
                x += (x + 1);
                patches++;
            }
        }
        return patches;
    }
};