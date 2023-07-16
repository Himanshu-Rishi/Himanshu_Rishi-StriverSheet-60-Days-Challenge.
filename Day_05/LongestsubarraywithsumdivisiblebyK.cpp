int longSubarrWthSumDivByK(int arr[], int n, int k)
{
    int prefix_sum = 0;
    int len = 0;
    map<int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == 0)
        {
            len = max(len, i + 1);
        }
        int temp = prefix_sum % k;
        if (temp < 0)
        {
            temp += k;
        }
        if (mp.find(temp) != mp.end())
        {
            len = max(len, i - mp[temp]);
        }
        else
        {
            mp[temp] = i;
        }
    }
    return len;
}