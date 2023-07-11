void merge(int arr[], int l, int m, int r)
{
    vector<int> temp;
    int left = l;
    int right = m + 1;
    int index = 0;
    while (left <= m and right <= r)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
        index++;
    }
    while (left <= m)
    {
        temp.push_back(arr[left]);
        left++;
        index++;
    }
    while (right <= r)
    {
        temp.push_back(arr[right]);
        right++;
        index++;
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}