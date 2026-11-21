#include<iostream>
using namespace std;
int sum(int arr[], int index)
{
    if (index==-1)
    {
        return 0;
    }

   return arr[index]+sum(arr,index-1);
}

int main()
{
    int arr[]={3,4,1,2,8};
    cout<<sum(arr,4);
    return 0;
}