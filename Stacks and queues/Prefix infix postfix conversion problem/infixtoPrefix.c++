#include <bits/stdc++.h>
using namespace std;

int tellPrecedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/' || c == '%')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string s)
{
    stack<int> st;
    string ans = "";
    for (auto charc : s)
    {
        if (charc == '(')
        {
            st.push('(');
        }
        else if (charc >= 'a' && charc <= 'z')
        {
            ans += charc;
        }
        else if (charc == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (st.empty())
                st.push(charc);
            else
            {
                if (st.top() == '(' || tellPrecedence(charc) < tellPrecedence(st.top()))
                {
                    st.push(charc);
                }
                else
                {

                    while (tellPrecedence(charc) > tellPrecedence(st.top()))
                    {
                        ans += st.top();
                        st.pop();
                    }
                    st.push(charc);
                }
            }
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{
    string s = "(a+b)*d";
    string str = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        str += s[i];
    }
    cout << "rev " << str << endl;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            str[i] = ')';
        else if (str[i] == ')')
            str[i] = '(';
        else
            continue;
    }
    cout << "infix after rev and brackets fix " << str << endl;
    string postfix = infixToPostfix(str);
    cout << postfix << endl;

    string ans = "";
    for (int i = postfix.size() - 1; i >= 0; i--)
    {
        ans += postfix[i];
    }
    cout << ans;
}
