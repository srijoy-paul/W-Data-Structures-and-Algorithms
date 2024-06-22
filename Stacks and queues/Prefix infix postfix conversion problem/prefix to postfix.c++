//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string preToPost(string s)
    {
        string revS = "";
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            revS += s[i];
        }
        for (int i = 0; i < revS.size(); i++)
        {
            if ((revS[i] >= 'a' && revS[i] <= 'z') || (revS[i] >= 'A' && revS[i] <= 'Z'))
            {
                st.push(string(1, revS[i]));
            }
            else
            {
                string temp = st.top();
                st.pop();
                temp += st.top();
                st.pop();
                temp += revS[i];
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends