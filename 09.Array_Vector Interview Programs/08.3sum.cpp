// Given an array arr[] and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.

// Examples:

// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
// Output: true
// Explanation: The triplet {1, 4, 8} sums up to 13.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasTripletSum(vector<int> &arr, int target)
{

    sort(arr.begin(), arr.end());

    int n = arr.size(); 
    for (int i = 0; i < n - 2; i++)
    {
        int ans = target - arr[i];
        int start = i + 1, end = n - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
                return 1;
            else if (arr[start] + arr[end] > ans)
                end--;
            else
                start++;
        }
    }
    return 0;
}

int main()
{
    vector <int>arr={1, 4, 45, 6, 10, 8};
    int target=13;
    cout<< hasTripletSum(arr,target);
    return 0;
}