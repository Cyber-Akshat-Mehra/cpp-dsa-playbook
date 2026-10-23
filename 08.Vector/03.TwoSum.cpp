// Example 1:

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].

// Note :- Other methods to solve
// 1. Bruteforce

// 2.Binary Search Method
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    for (int i = 0; i < n - 1; i++)
    {
        int x = target - numbers[i];
        int start = i + 1;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (numbers[mid] == x)
            {
                return {i + 1, mid + 1};
            }
            else if (numbers[mid] < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return {};
}


// 3.  Two pointer method
vector<int> twoSum2(vector<int> &numbers, int target)
{
    int start = 0, end = numbers.size() - 1;
    while (start <= end)
    {
        if (numbers[start] + numbers[end] == target)
        {
            return {start + 1, end + 1};
        }
        else if (numbers[start] + numbers[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return {};
}


int main()
{
    vector<int> v = {2, 7, 11, 15};
    // vector<int> result = twoSum(v, 9);  // 2nd method
    vector<int> result = twoSum2(v, 9);  // 3rd Method
    if (!result.empty())
    {
        cout << "[" << result[0] << ", " << result[1] << "]\n";
    }
    else
    {
        cout << "No two sum solution found\n";
    }
    return 0;
}