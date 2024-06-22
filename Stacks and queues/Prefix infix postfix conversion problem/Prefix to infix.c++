//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    string preToInfix(string s)
    {
        // Write your code here
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                st.push(string(1, s[i]));
            }
            else
            {
                string temp = "(";
                temp += st.top();
                st.pop();
                temp += s[i];
                temp += st.top();
                st.pop();
                temp += ")";
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
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends