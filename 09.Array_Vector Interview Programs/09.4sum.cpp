// Given an array A of N integers. You have to find whether a combination of four elements in the array whose sum is equal to a given value X exists or not.
 

// Example 1:

// Input:
// N = 6
// A[] = {1, 5, 1, 0, 6, 0}
// X = 7
// Output:
// 1

// Explantion:
// 1, 5, 1, 0 are the four elements which makes sum 7.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool hasFourSum(vector<int> &arr, int target)
{

    sort(arr.begin(), arr.end());
    int n = arr.size();

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {

            int remaining = target - arr[i] - arr[j];
            int start = j + 1, end = n - 1;

            while (start < end)
            {
                int sum = arr[start] + arr[end];

                if (sum == remaining)
                    return true;
                else if (sum > remaining)
                    end--;
                else
                    start++;
            }
        }
    }
    return false;
}

int main()
{
    vector<int>arr={1, 5, 1, 0, 6, 0};
    int target=7;
    cout<<hasFourSum(arr,target);
    return 0;
}