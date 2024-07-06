//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        // building the min heap(priority queue) from the given array
        for (long long i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }
        long long cost = 0;
        while (pq.size() > 1)
        {
            // poping the first smallest length present
            long long rope = pq.top();
            pq.pop();
            rope += pq.top();
            // poping the second smallest length present
            pq.pop();

            cost += rope;
            // put the joined rope length in the heap
            pq.push(rope);
        }
        return cost;
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends