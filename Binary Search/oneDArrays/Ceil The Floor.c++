pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    // Write your code here.
    int low = 0, high = n - 1;
    int ceil = -1, floor = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
            return {a[mid], a[mid]};
        else if (a[mid] > x)
        {
            ceil = a[mid];
            high = mid - 1;
        }
        else
        {
            floor = a[mid];
            low = mid + 1;
        }
    }
    return {floor, ceil};
}