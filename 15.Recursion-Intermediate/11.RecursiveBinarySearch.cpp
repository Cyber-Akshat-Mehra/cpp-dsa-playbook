#include <iostream>
using namespace std;
bool BinarySearch(int arr[], int start, int end, int x)
{
    if (start > end)
        return 0;

    int mid = start + (end - start / 2);
    if (arr[mid] == x)
    {
        return 1;
    }
    else if (arr[mid] < x)
    {
        return BinarySearch(arr, mid + 1, end, x);
    }
    else
    {
        return BinarySearch(arr, start, mid - 1, x);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << BinarySearch(arr, 0, 5, 5);
    return 0;
}