#include <bits/stdc++.h>
using namespace std;

// Better Approach
//  long long maxSubarraySum(vector<int> arr, int n)
//  {
//      // Write your code here.
//      long long maxSum=arr[0];
//      long long sum;
//      for(int i=0;i<n;i++){
//         sum=0;
//          for(int j=i;j<n;j++){
//              sum+=arr[j];
//              if (sum <= 0) {
//                sum = 0;
//              //   maxSum = 0;
//              }
//              maxSum = max(sum, maxSum);
//          }
//      }

//     return maxSum;
// }
// Better approach ends here

// optimal O(n) Kadane's algo
long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long maxSum = arr[0];
    long long sum = 0;
    pair<int, int> indexes; //<starting,ending>
    indexes.first = 0;
    int low, high;
    for (int ele = 0; ele < n; ele++)
    {
        sum += arr[ele];
        if (sum >= 0)
            indexes.second = ele;
        if (sum < 0)
        {
            sum = 0;
            indexes.first = ele + 1;
        }
        if (sum > maxSum)
        {
            low = indexes.first;
            high = indexes.second;

            maxSum = sum;
        }
        // maxSum = max(sum, maxSum);
    }
    cout << low << " " << high;

    return maxSum;
}
// optimal O(n) Kadane's algo Ends here

int main()
{
    int n = 6;
    vector<int> vec = {10, 20, -30, 40, -50, 60};
    maxSubarraySum(vec, n);
}