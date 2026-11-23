// Merge Sorting Algorithm
// The steps of the Merge Sort algorithm are:

//              < Divide >
// Split the array into two halves.
// Keep dividing each half until each subarray contains only one element.

//              < Conquer >
// A single-element array is already sorted, so no further action is needed.

//              < Merge >
// Compare the elements of the two sorted subarrays.
// Merge them into a single sorted array by repeatedly selecting the smaller element.
// Continue merging until all subarrays are combined into one fully sorted array.

//          < Time Complexity >
// 1. Best Case: O(n log n)
// 2. Average Case: O(n log n)
// 3. Worst Case: O(n log n)

//          < Space Complexity >
// O(n) (requires extra memory for merging).

#include <iostream>
#include <vector>
using namespace std;

void Merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }
    // Left array is not empty yet!
    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // Right array is not empty yet!
    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    // Inserting values to array
    index = 0;
    while (start <= end)
    {
        arr[start] = temp[index];
        start++, index++;
    }
}

void MergeSort(int arr[], int start, int end)
{
    // Stop Condition
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    // Left side
    MergeSort(arr, start, mid);
    // Right Side
    MergeSort(arr, mid + 1, end);
    // Merge
    Merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {3, 2, 1, 5, 3, 7, 9, 6, 5, 4};
    MergeSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
