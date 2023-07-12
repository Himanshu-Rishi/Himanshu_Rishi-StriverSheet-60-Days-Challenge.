int remove_duplicate(int arr[], int n)
{
    int current = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[current])
        {
            current++;
            arr[current] = arr[i];
        }
    }
    return current + 1;
}