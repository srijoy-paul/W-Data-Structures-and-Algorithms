#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "samosaslasabread";
    map<char, int> mpp;
    for (int i = 0; i < str.length(); i++)
    {
        mpp[str[i]]++;
    }

    int q;
    cout << "Enter Number of Queries: ";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // compute
        cout << mpp[c];
    }
}