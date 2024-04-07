// Brute Start

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i <= n; i++)
        {
            bool breaked = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] == i)
                {
                    breaked = 1;
                    break;
                }
            }
            if (breaked == 0)
                return i;
        }
        return 0;
    }
};

// Brute End

// Better starts using hash array

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            hash[nums[i]] += 1;
        }
        for (int i = 0; i <= n; i++)
        {
            if (hash[i] == 0)
            {
                return i;
            }
        }
        return 0;
    }
};

// better ends here

// optimal - using summation method
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int summation = (n * (n + 1)) / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        return summation - sum;
    }
};

// optimal ends here

// optimal xor method starts

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int xor1 = 0, xor2 = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            xor1 = xor1 ^ (i);
            xor2 = xor2 ^ nums[i];
        }
        xor1 = xor1 ^ n;

        return xor1 ^ xor2;
    }
};

// optimal xor method ends here