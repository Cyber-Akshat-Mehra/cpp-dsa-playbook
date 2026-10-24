/* This C++ program checks whether a given array can be
split into two parts such that the sum of both parts is equal.
Example:

Array: [1, 5, 1, 1]
Total sum = 8
Prefix sums: 1, 6, 7, 8
At index 1: prefix = 1, remaining = 7, not equal
At index 2: prefix = 6, remaining = 2, not equal
At index 3: prefix = 7, remaining = 1, not equal
So no equal split exists.

If the array is:

[1, 1, 1, 1]
Total sum = 4
Prefix at index 1 = 1, remaining = 3
Prefix at index 2 = 2, remaining = 2
Here equal split exists, so the program prints “Yes sum exist”.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divideSub(vector<int> &arr)
{
    int prefix = 0, total_sum = 0, n = arr.size();

    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        if (total_sum - prefix == prefix)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = divideSub(arr);
    if (result)
    {
        cout << "Yes sum exist";
    }
    else
    {
        cout << "No Sum doesnt exist ";
    }

    return 0;
}