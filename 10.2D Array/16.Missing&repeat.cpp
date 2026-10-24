// Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.

// Examples:

// Input: arr[] = [2, 2]
// Output: [2, 1]
// Explanation: Repeating number is 2 and the missing number is 1.
// Input: arr[] = [1, 3, 3] 
// Output: [3, 2]
// Explanation: Repeating number is 3 and the missing number is 2.
// Input: arr[] = [4, 3, 6, 2, 1, 1]
// Output: [1, 5]
// Explanation: Repeating number is 1 and the missing number is 5.


#include <iostream>
#include <vector>
using namespace std;

vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();

    // Convert to 0-based
    for (int i = 0; i < n; i++)
        arr[i]--;

    // Store frequency
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }

    vector<int> ans(2);

    for (int i = 0; i < n; i++)
    {

        // repeating element
        if (arr[i] / n == 2)
            ans[0] = i + 1;

        // missing element
        else if (arr[i] / n == 0)
            ans[1] = i + 1;
    }

    return ans;
}

int main()
{
    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> result = findTwoElement(arr);

    cout << "Repeating element: " << result[0] << endl;
    cout << "Missing element: " << result[1] << endl;

    return 0;
}

