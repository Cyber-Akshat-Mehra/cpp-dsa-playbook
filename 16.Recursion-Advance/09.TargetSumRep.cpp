// Target Sum Repetiton

// Steps:-

// 1. Start from index = 0 with the given Target.
// 2. At every element, make 2 choices:
//      Don't take the element:
//          index + 1
//          Move to the next element.

//      Take the element:
//          Target - arr[index]
//          Keep the same index so the same element can be used again.

// 3. If Target == 0, return 1 because one valid combination has been found.
// 4. If index == n or Target < 0, return 0.
// 5. Add both recursive results because we want to count all possible ways.

//          Key Difference from Normal Target Sum

// Normal Target Sum:
//      after taking an element → cannot reuse it.

// Target Sum Repetition:
//      after taking an element → can reuse it.

#include <iostream>
using namespace std;
int TargetSumRep(int arr[], int index, int n, int Target)
{
    // Target Achieved
    if (Target == 0)
        return 1;
    // No element left
    if (index == n || Target < 0)
        return 0;

    // Sum of Dont take and take
    return TargetSumRep(arr, index + 1, n, Target) + TargetSumRep(arr, index, n, Target - arr[index]);
}

int main()
{
    int arr[] = {2, 3, 4};
    int Target = 6;
    cout << TargetSumRep(arr, 0, 3, Target);
    return 0;
}