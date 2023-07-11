#include "bits/stdc++.h"

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void sortFunc(int arr[], int i, int j, int n)
{
    if (i > n - 1)
    {
        return;
    }
    if (j > n - 2)
    {
        j = 0;
        return;
    }
    if (arr[j] > arr[j + 1])
    {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
    }
    sortFunc(arr, i, j + 1, n);
    sortFunc(arr, i + 1, j, n);
}

void bubleSort(int arr[], int n)
{
    sortFunc(arr, 0, 0, n);
}

int main()
{
    int arr[] = {5, 3, 4, 2, 1};
    bubleSort(arr, 5);
    for(auto it: arr)
    {
        cout<<it<<' ';
    }
    return 0;
}