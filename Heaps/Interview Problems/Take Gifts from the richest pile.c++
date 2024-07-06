class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        priority_queue<long long> pq;
        for (long long i = 0; i < gifts.size(); i++)
        {
            pq.push(gifts[i]);
        }
        while (k && !pq.empty())
        {
            long long Gifts = pq.top();
            pq.pop();
            long long remGifts = sqrt(Gifts);
            if (remGifts)
                pq.push(remGifts);
            k--;
        }
        long long rem = 0;
        while (!pq.empty())
        {
            rem += pq.top();
            pq.pop();
        }
        return rem;
    }
};