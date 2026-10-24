/*
prefix() calculates cumulative sums from left to right.
Example: for array [6, 4, 5, -3, 2, 8]
prefix sums become [6, 10, 15, 12, 14, 22]

suffix() calculates cumulative sums from right to left.
For the same array, suffix sums become [16, 10, 6, 11, 9, 8]
*/

#include <iostream>
using namespace std;

void prefix(int arr[], int n)
{
    int a[100];
    a[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void suffix(int arr[], int n)
{
    int a[100];
    a[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        a[i] = a[i + 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 4, 5, -3, 2, 8};
    cout << "Prefix sum: ";
    prefix(arr, 6);
    cout << "Suffix sum: ";
    suffix(arr, 6);
    return 0;
}
