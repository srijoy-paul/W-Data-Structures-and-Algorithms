#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "schoolmate";
    vector<int> hash(26, 0);
    // creating hash array
    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i] - 'a']++;
    }
    // printing hash array
    for (auto i : hash)
    {
        cout << i << " ";
    }

    // number of charcter queries to search from the given string
    int q = 3;
    vector<char> strr;
    // taking input the q character queries
    while (q--)
    {
        char a;
        cin >> a;
        strr.emplace_back(a);
    }

    // printing the query result
    for (auto str : strr)
    {
        cout << "Count of " << str << " " << hash[str - 'a'] << endl;
    }
}