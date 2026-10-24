// You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

// Note : A subarray is a continuous part of an array.

// Examples:

// Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
// Output: 11
// Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

// Input: arr[] = [-2, -4]
// Output: -2
// Explanation: The subarray [-2] has the largest sum -2.

#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{

    long long maxi = INT_MIN, prefix = 0;
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        maxi = max(prefix, maxi);
        if (prefix < 0)
            prefix = 0;
    }

    return maxi;
}


int main(){
    int arr[7]={2, 3, -8, 7, -1, 2, 3};
    cout <<"The subarray with largest sum is "<< maxSubarraySum(arr,7);
    return 0;
}