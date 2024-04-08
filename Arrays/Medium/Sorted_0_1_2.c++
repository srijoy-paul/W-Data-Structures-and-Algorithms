
// Better approach
//  T.C: O(2n)
//  S.C : no extra space, but modifying array so it can be O(n) arugumently
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                cnt0++;
            else if (nums[i] == 1)
                cnt1++;
            else
                cnt2++;
        }
        for (int i = 0; i < cnt0; i++)
        {
            nums[i] = 0;
        }
        for (int i = cnt0; i < cnt1 + cnt0; i++)
        {
            nums[i] = 1;
        }
        for (int i = cnt1 + cnt0; i < n; i++)
        {
            nums[i] = 2;
        }
    }
};
// Better Approach ends here

// Optimal Solution with O(n) time complexity

// This is also called dutch national flag algorithm
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
// optimal solution ends here