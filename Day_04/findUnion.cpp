vector<int> output;
set<int> s;
for (int i = 0; i < n; i++)
{
    s.insert(arr1[i]);
}
for (int i = 0; i < m; i++)
{
    s.insert(arr2[i]);
}
for (auto it : s)
{
    output.push_back(it);
}
// int miny = min(n, m);
// int maxy = max(n, m);
// for(int i = 0; i < miny; i++)
// {
//     bool found = true;
//     for(int j = 0; j < maxy; j++)
//     {

//     }
// }
return output;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> v;
    while (i < n and j < m)
    {

        // This code is not necessary
        // while (i < n - 1 and arr1[i] == arr1[i + 1])
        // {
        //     i++;
        // }
        // while (j < n - 1 and arr2[j] == arr2[j + 1])
        // {
        //     j++;
        // }
        if (arr1[i] > arr2[j])
        {
            if (v.size() == 0 || v[v.size() - 1] != arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            if (v.size() == 0 || v[v.size() - 1] != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v[v.size() - 1] != arr2[j])
            {
                v.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (v[v.size() - 1] != arr1[i])
        {
            v.push_back(arr1[i]);
        }
        i++;
    }
    while (j < m)
    {
        if (v.size() == 0 || v[v.size() - 1] != arr2[j])
        {
            v.push_back(arr2[j]);
        }
        j++;
    }
    return v;
}