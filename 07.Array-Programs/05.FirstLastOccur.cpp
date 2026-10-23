#include <iostream>
using namespace std;

void SearchRange(int arr[], int target, int n)
{
    int start = 0, end = n - 1, first = -1, last = -1, mid;
    while (start <= end)
    {
        // find first
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // find last
    start = 0, end = n - 1;
    while (start <= end)
    {
        // find last
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "First : " << first << endl;
    cout << "Last : " << last;
}
int main()
{
    int arr[5]={1,2,3,3,5};
    SearchRange(arr,3,5);
    return 0;
}