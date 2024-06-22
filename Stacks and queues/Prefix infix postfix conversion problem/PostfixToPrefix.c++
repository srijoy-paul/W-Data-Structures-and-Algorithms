//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string postToPre(string s)
    {
        // Write your code here
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                st.push(string(1, s[i]));
            }
            else
            {
                string temp1 = st.top();
                st.pop();
                string temp2 = st.top();
                st.pop();
                string temp = s[i] + temp2 + temp1;
                st.push(temp);
            }
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends