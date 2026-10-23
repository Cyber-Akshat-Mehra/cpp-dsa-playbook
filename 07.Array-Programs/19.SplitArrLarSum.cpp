// Given an array arr[] and an integer k, divide the array into k contiguous subarrays such that the maximum sum among these subarrays is minimized. Find this minimum possible maximum sum.

// Examples:

// Input: arr[] = [1, 2, 3, 4], k = 3
// Output: 4
// Explanation: Optimal Split is [1, 2], [3], [4]. Maximum sum of all subarrays is 4, which is minimum possible for 3 splits.

#include<iostream>
using namespace std;

int splitArray(int arr[], int k, int n) {
    long long low = arr[0];
    long long high = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > low) {
            low = arr[i];   
        }
        high += arr[i];    
    }

    long long ans = high;

    while (low <= high) {
        long long mid = (low + high) / 2;

        int count = 1;
        long long currSum = 0;

        for (int i = 0; i < n; i++) {
            if (currSum + arr[i] <= mid) {
                currSum += arr[i];
            } else {
                count++;
                currSum = arr[i];
            }
        }

        if (count <= k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main(){
    int arr[4] = {1, 2, 3, 4};
    int k = 3, n=4;
    cout<<"Maximum sum of all subarrays is "<<splitArray(arr,k,n);
    return 0;
}