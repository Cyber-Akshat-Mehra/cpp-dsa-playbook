// Search element in rotated arrray
//{4,5,6,1,2,3}

#include <iostream>
using namespace std;

int Search(int arr[], int n, int target)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= target && arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (arr[mid] < target && arr[end] >= target)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {4, 5, 6, 1, 2, 3};
    cout << "Element is at Index " << Search(arr, 6, 3);
    return 0;
}