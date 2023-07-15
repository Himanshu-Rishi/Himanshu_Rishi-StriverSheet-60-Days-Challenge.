void rotate(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    d %= n;
    rotate(arr, 0, d - 1);
    rotate(arr, d, n - 1);
    rotate(arr, 0, n - 1);
}