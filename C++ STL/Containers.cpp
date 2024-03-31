#include <bits/stdc++.h>
using namespace std;

void stlPairs()
{
    pair<int, int> p = {1, 7};
    cout << p.first << " ";
    cout << p.second;

    pair<int, pair<int, int>> p1 = {1, {2, 4}};
    cout << endl
         << p1.first << endl
         << p1.second.second << endl
         << p1.second.first;

    pair<int, int> arr[] = {{1, 2}, {1, 8}};
    cout << endl
         << arr[1].second;
}

void stlVectors()
{
    vector<int> v;

    v.push_back(2);
    v.emplace_back(3);
    for (int i = 0; i < 2; i++)
    {
        cout << v[i] << endl;
    }

    vector<pair<int, int>> pairVector;
    pairVector.push_back({1, 7});
    pairVector.emplace_back(4, 6);
    for (int i = 0; i < 2; i++)
    {
        cout << pairVector[i].first << endl;
        cout << pairVector[i].second << endl;
    }

    vector<int> v1(4, 15);
    for (int i = 0; i < 4; i++)
    {
        cout << v1[i] << " ";
    }

    // vector iterators
    vector<int>::iterator it = v.begin();
    cout << *it << " ";
    it++;
    cout << *it;
}

int main()
{
    // stlPairs();
    stlVectors();
}