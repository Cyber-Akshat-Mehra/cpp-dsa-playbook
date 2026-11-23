// Target Sum Problem
// Ex target is 8 in {2,3,6} yes by adding {2+6} so yes taregt sum is exists

//              Steps
// 1. Start from index = 0 and given target.
// 2. For each element, make 2 choices:
//      Don't take the element → target remains same.
//      Take the element → subtract it from target.
// 3. Move to the next index in both cases.
// 4. If target == 0 → return true (1).
// 5. If index == n or target < 0 → return false (0).
// 6. Use OR (||) between both choices:
//      If either path finds the target → return true.
// 7. Continue recursively until a solution is found or all possibilities are exhausted.

//          Element
//             ↓
//      ┌──────────────┐
//      │              │
//     Take         Don't Take
//      │              │
//    target-x       target
//      │              │
//      └──────┬───────┘
//             ↓
//         next index

// Time Complexity :- 	O(2ⁿ)
// Auxiliary Space :- 	O(n)

#include <iostream>
using namespace std;
bool TargetSum(int arr[], int index, int n, int target)
{
    if (target == 0)
        return 1;
    if (index == n || target < 0)
        return 0;

    // Left side or Right side which will fullfill the target will return 1 if exist
    return TargetSum(arr, index + 1, n, target) || TargetSum(arr, index + 1, n, target - arr[index]);
}

int main()
{
    int arr[] = {2, 3, 6};
    int target = 8;
    cout << TargetSum(arr, 0, 3, target);
    return 0;
}