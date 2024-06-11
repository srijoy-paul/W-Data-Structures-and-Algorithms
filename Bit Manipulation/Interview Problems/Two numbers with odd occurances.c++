//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long int> twoOddNum(long long int Arr[], long long int n)
    {
        // code here
        vector<long long int> vec;
        long long int xorNum = 0;
        for (int i = 0; i < n; i++)
        {
            xorNum = xorNum ^ Arr[i];
        }
        long long int rightMost = (xorNum & (xorNum - 1)) ^ xorNum;
        long long int b1 = 0, b2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (Arr[i] & rightMost)
            {
                b1 = b1 ^ Arr[i];
            }
            else
            {
                b2 = b2 ^ Arr[i];
            }
        }
        if (b1 > b2)
        {
            vec.push_back(b1);
            vec.push_back(b2);
        }
        else
        {
            vec.push_back(b2);
            vec.push_back(b1);
        }
        return vec;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int N;
        cin >> N;
        long long int Arr[N];
        for (long int i = 0; i < N; i++)
            cin >> Arr[i];
        Solution ob;
        vector<long long int> ans = ob.twoOddNum(Arr, N);
        for (long long int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends