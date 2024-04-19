// simple binary search approach
int firstOccur(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int lastOccur(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here
    int first = firstOccur(arr, n, k);
    if (first == -1)
        return {-1, -1};
    return {first, lastOccur(arr, n, k)};
}

// simple binary search appraoch ends here

// lower bound and upper bound way
class Solution
{
private:
    int lowerBound(vector<int> arr, int n, int x)
    {
        // Write your code here
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] >= x)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &arr, int n, int x)
    {
        // Write your code here.
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] > x)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int> &arr, int k)
    {
        int n = arr.size();
        int lb = lowerBound(arr, n, k);
        if (lb == n || arr[lb] != k)
            return {-1, -1};
        return {lb, upperBound(arr, n, k) - 1};
    }
};
// lower bound and upper bound way ends here
