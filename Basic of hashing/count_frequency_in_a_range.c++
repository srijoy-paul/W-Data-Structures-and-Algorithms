#include <bits/stdc++.h>
using namespace std;

void countFrequency(int n, int x, vector<int> &nums)
{
    // Write your code here.
    vector<int> hash(x + 1, 0);
    vector<int> res;
    // int i=0; 11 14 8 3 12 14 1 7 4 3
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]] += 1;
    }
    // for(int i=1;i<=n;i++){
    //     res[i]=hash[i];
    // }
    for (int i = 0; i < n; i++)
    {
        res[i] = hash[i + 1];
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> num;
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    countFrequency(10, 14, num);
}