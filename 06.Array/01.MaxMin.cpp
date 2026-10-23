// Maximum and Minimum Value in Array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 7, 1, 5, 3};
    int min = arr[0], max = arr[0];

    //Min
    for (int i = 1; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum Value : " << min << endl;

    //Max
    for (int i = 1; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum Value : " << max;
    return 0;
}
