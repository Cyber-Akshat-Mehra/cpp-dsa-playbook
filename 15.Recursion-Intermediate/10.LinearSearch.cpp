#include <iostream>
using namespace std;
bool linearSearch(int arr[], int x, int index, int n)
{
    if (index == n)
        return 0;

    if (arr[index] == x)
        return 1;

    return linearSearch(arr, x, index + 1, n);
}

int main()
{
    int arr[] = {1, 2, 6, 4, 5};
    cout << linearSearch(arr, 5, 0, 5);
    return 0;
}