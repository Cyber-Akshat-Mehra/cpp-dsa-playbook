//  Given n non-negative integers representing an elevation map where the
// width of each bar is 1, compute how much water it can trap after raining.
// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1].
// In this case, 6 units of rain water (blue section) are being trapped.

// 1.Bruteforce

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 2. By storing left max and rightmax in array
int trap(vector<int> &height)
{
    int n = height.size();
    int leftmax[n], rightmax[n];
    // left max
    leftmax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftmax[i] = max(leftmax[i - 1], height[i]);
    // rightmax
    rightmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
        rightmax[i] = max(rightmax[i + 1], height[i]);
    // storing
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        int minheight = min(leftmax[i], rightmax[i]);
        if (minheight - height[i] >= 0)
            water += minheight - height[i];
    }
    return water;
}

// 3.By finding longest bilding then traverse till it find left part after find right part by tarvering reverse till longest building
int trap2(vector<int> &height)
{
    int n = height.size();
    int leftmax = 0, rightmax = 0, water = 0, maxheight = height[0], index = 0;

    // Longest Building
    for (int i = 1; i < n; i++)
    {
        if (height[i] > maxheight)
        {
            maxheight = height[i];
            index = i;
        }
    }

    // left part
    for (int i = 0; i < index; i++)
    {
        if (leftmax > height[i])
            water += leftmax - height[i];
        else
            leftmax = height[i];
    }

    // right part
    for (int i = n - 1; i > index; i--)
    {
        if (rightmax > height[i])
            water += rightmax - height[i];
        else
            rightmax = height[i];
    }

    return water;
}

// 4.Single Traversal using 2 pointer
int trap3(vector<int> &height)
{
    int leftMax = INT_MIN;
    int rightMax = INT_MIN;
    int water = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        leftMax = max(leftMax, height[left]);
        rightMax = max(rightMax, height[right]);
        if (leftMax < rightMax)
            water += leftMax - height[left++];
        else
            water += rightMax - height[right--];
    }

    return water;
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap3(arr);
    return 0;
}