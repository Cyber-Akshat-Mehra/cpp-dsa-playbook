#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 56, 7, 9, 99};
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "First Largest : " << max << endl;

    int secondMax = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    cout << "Second Largest : " << secondMax;

    return 0;
}