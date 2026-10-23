// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4

#include <iostream>
using namespace std;

int minEatingSpeed(int piles[], int h, int n)
{
    int start = 1;
    int end = 0;

    // manually find max
    for (int i = 0; i < n; i++)
    {
        if (piles[i] > end)
        {
            end = piles[i];
        }
    }

    int ans = end;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        long long total_time = 0;

        for (int i = 0; i < n; i++)
        {
            total_time += (piles[i] + mid - 1) / mid; // ceil division
        }

        if (total_time > h)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[4]={3,6,7,11};
    cout<<"Minimum  "<< minEatingSpeed(arr,8,4)<<" banana per hour such that she can eat all the bananas within h hours";
    return 0;
}