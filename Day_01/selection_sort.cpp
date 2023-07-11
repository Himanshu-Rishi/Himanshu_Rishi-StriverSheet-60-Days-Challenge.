int select(int arr[], int i)
{
    selectionSort(arr, i);
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_element = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_element])
            {
                min_element = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_element];
        arr[min_element] = temp;
    }
}