#include <iostream>
using namespace std;
int main()
{
    int arr[14] = {41, 9, 9 ,48, 11, 2, 11, 12, 28, 10, 15, 4, 16, 48};
    
    for (int i = 0; i < 14 - 1; i++)
    {
    
        for (int j = 0; j < 14-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
 
        }
    }

    for (int i = 0; i < 14; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}