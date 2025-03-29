#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int calPower(int n, int p)
{
    if (p == 0)
        return 1;
    return n * calPower(n, p - 1);
}

// int main()
// {
//     int num, power;
//     cin >> num >> power;
//     cout << calPower(num, power);
// }

// prime num
// bool calcIsPrime(int i, int n)
// {
//     if (n % i == 0)
//         return false;
//     if (i == n / 2)
//         return true;
//     return calcIsPrime(i + 1, n);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 2;
//     cout << "is prime? " << calcIsPrime(i, n);
// }

// largest element in array
// int findLargestNum(int i, vector<int> arr, int maxVal)
// {
//     if (i > arr.size())
//         return maxVal;
//     return findLargestNum(i + 1, arr, max(maxVal, arr[i]));
//     // return max(maxVal,arr[i]);
// }
// int main()
// {
//     vector<int> arr;
//     bool toTake = 1;
//     int temp;
//     while (toTake)
//     {
//         cout << "Press -1 to stop" << endl;
//         cin >> temp;
//         if (temp == -1)
//             break;
//         arr.emplace_back(temp);
//     }
//     int maxVal = INT_MIN;
//     cout << findLargestNum(0, arr, maxVal);
// }

// reversing a num
// int calcRevNum(int num, int rnum)
// {
//     if (num == 0)
//         return rnum;
//     rnum = (rnum * 10) + (num % 10);
//     return calcRevNum(num / 10, rnum);
// }
// int main()
// {
//     int num, revNum = 0;
//     cin >> num;
//     cout << calcRevNum(num, revNum);
// }

// all permutations of a string
void genAllPermus(string str, int l, int r, vector<string> &vec)
{
    if (l == r)
        vec.push_back(str);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str[i], str[l]);
            genAllPermus(str, l + 1, r, vec);
            swap(str[i], str[l]);
        }
    }
}
// int main()
// {
//     string str;
//     cin >> str;
//     vector<string> allPermus;
//     genAllPermus(str, 0, str.size() - 1, allPermus);
//     cout << "Number of perms: " << allPermus.size() << endl;
//     for (auto strItem : allPermus)
//     {
//         cout << strItem << endl;
//     }
// }

// F(N)th term find
// int main()
// {
//     int N;
//     cin >> N;
//     int step = 1;
//     int i = 1;
//     int finalRes = 0;
//     int stepVal = 1;
//     while (step <= N)
//     {
//         stepVal = 1;
//         for (int j = 1; j <= step; j++)
//         {
//             stepVal *= i;
//             i++;
//         }
//         finalRes += stepVal;
//         step++;
//     }

//     cout << finalRes;
// }

//[2,5,7,4,1]

// pascal's triangle - iterative approach
// int main()
// {
//     int N;
//     cin >> N;
//     int totalEle = (N * (N + 1)) / 2;
//     vector<int> pa(totalEle);
//     pa[0] = 1;
//     int i = 1;
//     int prevS = 1, prevE = 2;
//     for (int r = 1; r < N; r++)
//     {
//         int start = i;
//         int end = i + r;
//         pa[start] = 1;
//         pa[end] = 1;
//         int ops = r - 1;
//         // if(ops==0)continue;
//         int j = prevS;
//         while (ops && j <= prevE - 1)
//         {
//             // if (j <= prevE - 1)
//             pa[++i] = pa[j] + pa[j + 1];

//             j++;
//             ops--;
//         }
//         prevS = start, prevE = end;
//         i = end + 1;
//     }
//     for (auto num : pa)
//     {
//         cout << num << endl;
//     }
// }

// combinations of well-formed parentheses from N pairs - recursively

// void genBracketPairs(string curr, int o, int c, int n, vector<string> &result)
// {
//     if (curr.size() == (2 * n))
//     {
//         result.push_back(curr);
//         return;
//     }
//     if (o < n)
//     {
//         genBracketPairs(curr + "(", o + 1, c, n, result);
//     }
//     if (c < o)
//     {
//         genBracketPairs(curr + ")", o, c + 1, n, result);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string curr = "";
//     vector<string> result;
//     genBracketPairs(curr, 0, 0, n, result);
//     cout << "No. of " << result.size() << endl;
//     for (auto str : result)
//     {
//         cout << str << ",";
//     }
// }

// using iterative method using BFS(queue)
struct parenthesisState
{
    string curr;
    int o;
    int c;
};
int main()
{
    int n;
    cin >> n;
    vector<string> res;

    queue<parenthesisState> q;
    q.push({"", 0, 0});

    while (!q.empty())
    {
        parenthesisState currState = q.front();
        q.pop();

        if (currState.curr.size() == (2 * n))
        {
            res.push_back(currState.curr);
        }
        else
        {
            if (currState.o < n)
            {
                q.push({currState.curr + "(", currState.o + 1, currState.c});
            }
            if (currState.c < currState.o)
            {
                q.push({currState.curr + ")", currState.o, currState.c + 1});
            }
        }
    }

    cout << "brackets arrangements:" << endl;
    for (const auto &str : res)
    {
        cout << str << ",";
    }
}