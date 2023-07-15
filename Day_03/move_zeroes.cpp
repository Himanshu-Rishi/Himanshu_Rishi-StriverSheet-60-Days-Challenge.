void pushZerosToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[j] == 0)
        {
            if (arr[i] != 0)
            {
                swap(arr[j], arr[i]);
                j++;
            }
        }
        else
        {
            j++;
        }
    }
}