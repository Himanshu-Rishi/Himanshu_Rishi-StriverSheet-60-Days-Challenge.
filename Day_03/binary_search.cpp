int binarysearch(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (arr[start] == k)
        {
            return start;
        }
        if (arr[end] == k)
        {
            return end;
        }
        if (arr[start] < k)
        {
            start++;
        }
        else if (arr[end] > k)
        {
            end--;
        }
    }
    return -1;
}