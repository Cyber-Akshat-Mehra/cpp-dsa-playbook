// Input: arr = [2,3,4,7,11], k = 5
// Output: 9
// Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

#include <iostream>
using namespace std;
int findKthPositive(int arr[], int k, int n)
{
    int start = 0, end = n - 1, mid, ans = n;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans + k;
}
int main()
{
    int arr[5]={2,3,4,7,11};
    cout<<"The Kth element is  "<<findKthPositive(arr,5,5);
    return 0;
}