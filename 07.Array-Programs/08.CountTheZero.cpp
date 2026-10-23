// Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.
// Examples:
// Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
// Output: 3
// Explanation: There are 3 0's in the given array.
#include <iostream>
using namespace std;

int countZeros(int arr[], int n) {
    int low = 0, high = n - 1;
    int firstZeroIndex = n; // assume no zero

    while (low <= high) {
        int mid = low + (high - low) / 2;//6

        if (arr[mid] == 0) {
            firstZeroIndex = mid;  
            high = mid - 1;       
        } else {
            low = mid + 1;
        }
    }

    return n - firstZeroIndex;
}

int main() {
    int arr[] = {1,1,1,1,1,1,1,1,1,0,0,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << countZeros(arr, n);

    return 0;
}