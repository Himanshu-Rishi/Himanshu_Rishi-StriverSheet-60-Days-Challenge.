// gfg question approach mine

vector<vector<int>> stockBuySell(vector<int> arr, int n)
{
    vector<vector<int>> v;
    int buy = 0;
    int sell = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[buy])
        {
            if (arr[buy] < arr[sell])
            {
                v.push_back({buy, sell});
            }
            buy = i;
            sell = i;
        }
        else if (arr[i] > arr[sell])
        {
            sell = i;
        }
        else if (arr[i] < arr[sell])
        {
            v.push_back({buy, sell});
            buy = i;
            sell = i;
        }
    }
    if (arr[sell] > arr[buy])
    {
        v.push_back({buy, sell});
    }
    return v;
}