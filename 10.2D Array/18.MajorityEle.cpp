// This program finds the majority element in an array using Boyer-Moore Voting Algorithm.

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate, count = 0, n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            candidate = nums[i];
        }
        else
        {
            if (candidate == nums[i])
                count++;
            else
                count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
            count++;
    }
    if (count > n / 2)
        return candidate;
    else
        return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}