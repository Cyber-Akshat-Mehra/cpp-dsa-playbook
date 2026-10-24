/* 
This C++ program checks whether an array can be divided into two subsets with equal sum.
Example:

Array: [1, 5, 11, 5]
Total sum = 22
target = 11
A subset like [1, 5, 5] gives sum = 11
So the remaining element [11] also gives sum = 11
Hence, the array can be split into two equal-sum parts.

Output:
Yes
 */

#include <iostream>
#include <vector>
using namespace std;

bool equalSumPartition(vector<int>& arr) {
    int n = arr.size();
    int total = 0;

    for (int x : arr) total += x;

    if (total % 2 != 0) return false;

    int target = total / 2;

    // Try every subset using bitmask
    for (int mask = 0; mask < (1 << n); mask++) {
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }

        if (sum == target) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 5, 11, 5};

    if (equalSumPartition(arr))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}