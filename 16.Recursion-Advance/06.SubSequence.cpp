// Subsequence Sum

// Steps of the algorithm

// 1. For every element, we have 2 choices:
//      Do not include the current element.
//      Include the current element.
// 2. Continue recursively for the next element.
// 3. When index == n:
//      Store the sum in ans.
//      Print the current subsequence.

// 4. After returning from the include call, use:
// temp.pop_back();
// to backtrack and remove the current element.

// Time Complexity :- O(n × 2ⁿ) ->	Generate 2ⁿ subsequences + print each
// Auxiliary Space	O(n) ->	Recursion stack + temp
// Output Space (ans)	O(2ⁿ) -> Stores all 2ⁿ sums
// Total Space	O(2ⁿ + n) = O(2ⁿ) -> ans dominates

#include <iostream>
#include <vector>
using namespace std;

void SubsequenceSum(int arr[], int index, int n, int sum,
                    vector<int> &ans, vector<int> &temp)
{
    // Base Case
    if (index == n)
    {
        ans.push_back(sum);

        // Print sum and subsequence
        cout << sum << " = {";
        for (int i = 0; i < temp.size(); i++)
        {
            cout << temp[i];
            if (i != temp.size() - 1)
                cout << ", ";
        }
        cout << "}" << endl;

        return;
    }

    // Not Include
    SubsequenceSum(arr, index + 1, n, sum, ans, temp);

    // Include
    temp.push_back(arr[index]);

    SubsequenceSum(arr, index + 1, n, sum + arr[index], ans, temp);

    // Backtrack
    temp.pop_back();
}

int main()
{
    int arr[] = {1, 2, 3};

    vector<int> ans;
    vector<int> temp;

    SubsequenceSum(arr, 0, 3, 0, ans, temp);

    return 0;
}