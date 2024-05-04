class Solution {
private:
    string rotate(string nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

        return nums;
    }

public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        string afterIrotate;
        for (int i = 1; i <= s.size(); i++) {
            afterIrotate = rotate(s, i);
            if (afterIrotate == goal)
                return true;
        }

        return false;
    }
};