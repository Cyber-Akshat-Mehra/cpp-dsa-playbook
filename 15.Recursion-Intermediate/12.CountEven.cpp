#include <iostream>
using namespace std;
int CountEven(int arr[], int index, int count)
{
    if (index == -1)
    {
        return count;
    }
    if (arr[index] % 2 == 0)
        return CountEven(arr, index - 1, count + 1);
    else
        return CountEven(arr, index - 1, count);
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    cout << CountEven(arr, 4, 0);
    return 0;
}