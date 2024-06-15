class Solution
{
public:
    int findMaximizedCapital(int k, int w, vector<int> &profits, vector<int> &capital)
    {
        int n = profits.size();
        vector<pair<int, int>> projects;
        for (int i = 0; i < n; i++)
        {
            projects.emplace_back(capital[i], profits[i]);
        }
        sort(projects.begin(), projects.end());
        priority_queue<int> maxHeap;
        int currIndex = 0;

        for (int i = 0; i < k; ++i)
        {
            while (currIndex < n && projects[currIndex].first <= w)
            {
                maxHeap.push(projects[currIndex].second);
                currIndex++;
            }

            if (maxHeap.empty())
            {
                break;
            }
            w += maxHeap.top();
            maxHeap.pop();
        }
        return w;
    }
};