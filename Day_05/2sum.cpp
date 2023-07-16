bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int current = arr[low] + arr[high];
        if (current < x)
        {
            low++;
        }
        else if (current > x)
        {
            high--;
        }
        else
        {
            return true;
        }
    }
    return false;
}