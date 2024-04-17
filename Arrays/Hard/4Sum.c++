// Better solution
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        set<vector<int>> ansSet;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<long long> hashSet;
                for (int k = j + 1; k < n; k++)
                {
                    long long sum3 = nums[i] + nums[j];
                    sum3 += nums[k];
                    long long fourth = target - sum3;
                    if (hashSet.size() != 0 && hashSet.find(fourth) != hashSet.end())
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        ansSet.insert(temp);
                    }
                    hashSet.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(ansSet.begin(), ansSet.end());
        return ans;
        // Better solution ends here

        // optimal soluton
        class Solution
        {
        public:
            vector<vector<int>> fourSum(vector<int> &nums, int target)
            {
                if (nums.size() == NULL || nums.size() < 4)
                    return {};
                int n = nums.size();
                vector<vector<int>> ans;
                sort(nums.begin(), nums.end());
                for (int i = 0; i < n - 3; i++)
                {
                    if (i > 0 && nums[i] == nums[i - 1])
                        continue;
                    for (int j = i + 1; j < n - 2; j++)
                    {
                        if (j > i + 1 && nums[j] == nums[j - 1])
                            continue;
                        int k = j + 1;
                        int l = n - 1;
                        while (k < l)
                        {
                            long long sum = nums[i] + nums[j];
                            sum += nums[k];
                            sum += nums[l];
                            if (sum < target)
                                k++;
                            else if (sum > target)
                                l--;
                            else
                            {
                                vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                                ans.emplace_back(temp);
                                k++;
                                l--;
                                while (k < n && nums[k] == nums[k - 1])
                                    k++;
                                while (l > j && nums[l] == nums[l + 1])
                                    l--;
                            }
                        }
                    }
                }

                return ans;
            }
        };

        // optimal soluton ends here