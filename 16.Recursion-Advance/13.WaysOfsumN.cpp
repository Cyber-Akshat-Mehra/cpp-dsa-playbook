// Ways / Coin Change Recursion 

//              Steps:

// 1. If sum == 0 → return 1 (one valid way).
// 2. If sum < 0 → return 0 (invalid way).
// 3. Loop through every element.
// 4. Choose an element and recursively call with:
//          sum - arr[i]
// 5. Add all recursive results to count total ways.

//              Pattern
// Choose any element → Reduce sum → Repeat → Add all ways

//              Complexity
// Time: O(n^sum) approximately
// Auxiliary Space: O(sum) recursion depth



#include <iostream>
#include <vector>
using namespace std;
int Ways(vector<int> arr, int sum)
{
    int n = arr.size();
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += Ways(arr, sum - arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr={1,5,6};
    int sum=7;
    cout << Ways(arr,sum); 
    return 0;
}