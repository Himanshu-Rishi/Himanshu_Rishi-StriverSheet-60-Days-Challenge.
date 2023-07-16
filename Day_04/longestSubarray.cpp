// n2
int lenOfLongSubarr(int arr[], int n, int k)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i];
        if (sum == k)
        {
            count = max(count, 1);
        }
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                count = max(count, abs(j - i) + 1);
            }
        }
        sum = 0;
    }
    return count;
}

// nlogn
int lenOfLongSubarr(int arr[], int n, int k)
{
    int prefix_sum = 0;
    int len = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == k)
        {
            len = max(len, i + 1);
        }
        int temp = prefix_sum - k;
        if (mp.find(temp) != mp.end())
        {
            len = max(len, i - mp[temp]);
        }
        if (mp.find(prefix_sum) == mp.end())
        {
            mp[prefix_sum] = i;
        }
    }
    return len;
}

// n for positive number only
int lenOfLongSubarr(int arr[], int n, int k)
{
    int low = 0;
    int high = 0;
    int len = 0;
    int currentSum = arr[0];
    int a = 7;
    while (low <= high and high < n)
    {
        // cout<<high<<" "<<low<<endl;
        if (currentSum < k)
        {
            high++;
            currentSum += arr[high];
        }
        else if (currentSum > k)
        {
            low++;
            currentSum -= arr[low];
        }
        else
        {
            len = max(len, high - low + 1);
            high++;
            currentSum += arr[high];
        }
    }
    return len;
}