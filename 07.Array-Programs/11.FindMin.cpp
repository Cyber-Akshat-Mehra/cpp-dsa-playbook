// Find Minimum element in Rotated array
//  Input: nums = [3,4,5,1,2]
//  Output: 1
//  Explanation: The original array was [1,2,3,4,5] rotated 3 times.

#include <iostream>
using namespace std;

int FindMin(int arr[], int n)
{
    int ans = arr[0], start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    cout << "Minimum Element is " << FindMin(arr, 5);
    return 0;
}