// Quick Sort
// Quick Sort Steps

// Quick Sort works using Divide and Conquer:

// -> Choose a pivot
//      Select an element as the pivot.
//      Common choices: first, last, middle, or random element.
// -> Partition
//      Rearrange the array so that:
//          Elements smaller than pivot go to the left.
//          Elements greater than pivot go to the right.
//      The pivot reaches its correct sorted position.
// -> Recursively sort the left part
//      Apply Quick Sort to the elements before the pivot.
// -> Recursively sort the right part
//      Apply Quick Sort to the elements after the pivot.
// -> Stop
//      When a subarray has 0 or 1 element, it is already sorted.

// -> Time complexity
//      Best Case        O(n log n)
//      Average Case    O(n log n)
//      Worst Case	    O(n²)

// -> Space Complexity
//      avg case = O(logn)
//      worst case = O(n)

#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int pivot = partition(arr, start, end);

    // left side
    quickSort(arr, start, pivot - 1);
    // right side
    quickSort(arr, pivot, end);
}

int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}