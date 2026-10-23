// ex [1,4,9,10,8,5] ans=10

#include <iostream>
using namespace std;
int PeakIndex(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = end + (start - end) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {1, 4, 8, 10, 8, 5};
    int idx = PeakIndex(arr, 6);
    cout << arr[idx];
    return 0;
}