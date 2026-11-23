// Perfect Sum Problem

// Steps:-
// Start from index = 0 and the given target.
// For every element, make two choices:
//      Don't take the element → target stays the same.
//      Take the element → subtract the element from target.
// Move to the next index in both cases.
// If target == 0, return 1 because one valid subset is found.
// If index == n or target < 0, return 0 because no valid subset exists on that path.
// Add the results of both recursive calls because we need to count all valid subsets.

// Time Complexity: O(2ⁿ)
// Auxiliary Space: O(n) 



#include <iostream>
using namespace std;
int PerfectSum(int arr[], int index, int n, int sum)
{
    // Target Achieved 
    if (sum == 0)
        return 1;
    // No element left 
    if (index == n || sum < 0)
        return 0;

    // Sum of Dont take and take
    return PerfectSum(arr, index + 1, n, sum) + PerfectSum(arr, index + 1, n, sum - arr[index]);
}

int main()
{
    int arr[] = {5, 2, 3, 6, 10, 8};
    int sum = 10;
    cout << PerfectSum(arr, 0, 6, sum);
    return 0;
}