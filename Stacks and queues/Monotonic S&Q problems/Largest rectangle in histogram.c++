class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> nsl(n, -1);
        vector<int> nsr(n, n);
        stack<int> st;
        stack<int> st2;
        // calculate NSR
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] > heights[i])
            {
                nsr[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        // calculate NSL
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st2.empty() && heights[st2.top()] > heights[i])
            {
                nsl[st2.top()] = i;
                st2.pop();
            }
            st2.push(i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, heights[i] * (nsr[i] - nsl[i] - 1));
        }
        return ans;
    }
};