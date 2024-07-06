int Solution::nchoc(int A, vector<int> &B)
{
    priority_queue<int> pq;
    for (int i = 0; i < B.size(); i++)
    {
        pq.push(B[i]);
    }
    long long maxChocolate = 0;
    while (A && (!pq.empty()))
    {
        maxChocolate += pq.top();
        if (pq.top() / 2)
        {
            pq.push(pq.top() / 2);
        }
        pq.pop();
        A--;
    }
    return maxChocolate % 1000000007;
}