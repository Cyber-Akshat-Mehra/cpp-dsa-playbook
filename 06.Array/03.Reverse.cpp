// Reverse array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 6, 7, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0,j = size-1;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}