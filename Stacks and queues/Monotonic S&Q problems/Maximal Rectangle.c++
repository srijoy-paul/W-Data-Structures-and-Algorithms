class Solution
{
private:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        stack<int> st;
        int ans = 0, index;
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                index = st.top();
                st.pop();
                if (!st.empty())
                    ans = max(ans, heights[index] * (i - st.top() - 1));
                else
                {
                    ans = max(ans, heights[index] * i);
                }
            }
            st.push(i);
        }
        while (!st.empty())
        {
            index = st.top();
            st.pop();
            if (!st.empty())
            {
                ans = max(ans, heights[index] * (n - st.top() - 1));
            }
            else
            {
                ans = max(ans, heights[index] * (n));
            }
        }
        return ans;
    }

public:
    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int ans = 0;
        vector<int> vec(col, 0);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][j] == '0')
                    vec[j] = 0;
                else
                    vec[j] += 1;
            }
            ans = max(ans, largestRectangleArea(vec));
        }
        return ans;
    }
};