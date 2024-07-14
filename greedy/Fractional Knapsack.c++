//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
// custom comparator sort
bool compare(Item a, Item b)
{
    double ratio1 = (double)a.value / (double)a.weight;
    double ratio2 = (double)b.value / (double)b.weight;

    return ratio1 > ratio2;
}
class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        double totalValue = 0.0;
        vector<Item> items(arr, arr + n);
        sort(items.begin(), items.end(), compare);
        for (auto it : items)
        {
            if (w >= it.weight)
            {
                w -= it.weight;
                totalValue += it.value;
            }
            else if (w >= 0)
            {
                double temp = (double)it.value / it.weight;
                totalValue += (temp * w);
                w = 0;
                break;
            }
        }

        return (double)totalValue;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--)
    {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends