#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, mid, end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], n, key;
    cout << "How many element you want in array : ";
    cin >> n;
    cout << "Enter Element in Array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Element You want to Find : ";
    cin >> key;

    int result=BinarySearch(arr,n,key);
    cout << "Element Found at Index : " << result;

    return 0;
}