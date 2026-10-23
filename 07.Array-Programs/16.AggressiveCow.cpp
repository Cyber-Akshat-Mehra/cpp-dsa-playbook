// You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

// Examples:

// Input: stalls[] = [1, 2, 4, 8, 9], k = 3
// Output: 3
// Explanation: The first cow can be placed at stalls[0],
// the second cow can be placed at stalls[2] and
// the third cow can be placed at stalls[3].
// The minimum distance between cows in this case is 3, which is the largest among all possible ways.

#include <iostream>
#include <algorithm>
using namespace std;

int aggressiveCows(int arr[], int n, int k)
{

    int start = 0, end, mid, ans;
    sort(arr, arr + n);

    end = arr[n - 1] - arr[0];
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int count = 1, pos = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (pos + mid <= arr[i])
            {
                count++;
                pos = arr[i];
            }
        }

        if (count < k)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[5]={1, 2, 4, 8, 9};
    cout<<"The minimum distance between cows is "<<aggressiveCows(arr,5,3);
    return 0;
}