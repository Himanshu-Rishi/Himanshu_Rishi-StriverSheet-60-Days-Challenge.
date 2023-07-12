class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int low = 0;
        int high = n - 1;
        int maxy = 0;
        while (low <= high)
        {
            maxy = max(arr[low], maxy);
            maxy = max(arr[high], maxy);
            low++;
            high--;
        }
        return maxy;
    }
};