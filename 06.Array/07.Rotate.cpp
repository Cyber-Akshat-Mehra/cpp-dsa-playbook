//Rotate array by 1 in clock wise direction
//ex {2,3,7,9,1} -> { 1,2,3,7,9 }

#include <iostream>
using namespace std;
int main (){
    int n=5;
    int arr[n]={2,3,7,9,1};
    int last=arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}