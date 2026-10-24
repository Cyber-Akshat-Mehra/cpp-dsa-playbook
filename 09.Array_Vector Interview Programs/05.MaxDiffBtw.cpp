/* This C++ program finds the maximum difference between two elements in an array,
 where the earlier element must be smaller than the later element.

What it means:

We are not asked to find the maximum value difference in any order.
We want the largest value of:
arr[j] - arr[i]
where i < j
Also, the earlier element must be the smaller one, so the difference is positive.
Example:
For the array:

[2, 3, 10, 6, 4, 8, 1]
The maximum difference is:

10 - 2 = 8 */

// 1.Bruteforce

// 2. Single Traversal method

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDiff(vector<int> arr)
{
    int n = arr.size(), mini = arr[0], ans = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= mini)
        {
            mini = arr[i];
        }
        else
        {
            ans = max(ans, arr[i] - mini);
        }
    }
    return ans;
}

// 2 Kadane's Algo
int maxDiff2(vector<int> arr)
{
    int n = arr.size(), diff = arr[1] - arr[0], currsum = diff, maxsum = -1;

    if (currsum > 0)
        maxsum = currsum;

    for (int i = 1; i < n - 1; i++)
    {
        diff = arr[i + 1] - arr[i];

        if (currsum > 0)
        {
            currsum += diff;
        }
        else
        {
            currsum = diff;
        }

        if (currsum > 0 && currsum > maxsum)
        {
            maxsum = currsum;
        }
    }
    return maxsum;
}

int main()
{
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
    cout << "By Single Traversal Method " << maxDiff(arr) << endl;
    cout << "By Kadane's Algo " << maxDiff2(arr);
    return 0;
}