// Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

// Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

// Examples:

// Input: arr[] = [5, 10, 30, 20, 15], k = 3
// Output: 35
// Explanation: The optimal allocation of boards among 3 painters is - 
// Painter 1 → [5, 10] → time = 15
// Painter 2 → [30] → time = 30
// Painter 3 → [20, 15] → time = 35
// Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35


#include <iostream>
using namespace std;

int minTime(int arr[], int n, int m)
{
    if (m > n)
        return -1;
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
        if (start < arr[i])
        {
            start=arr[i];
        }
        
        end += arr[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }

        if (count <= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Job will be done when all painters finish at time "<<minTime(arr,10,5);
    return 0;
}