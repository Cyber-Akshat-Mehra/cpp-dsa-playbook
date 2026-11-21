#include<iostream>
using namespace std;
int minEle(int arr[], int index)
{
    if (index==-1)
    {
        return arr[index];
    }

   return min(arr[index],minEle(arr,index-1));
}

int main()
{
    int arr[]={3,4,1,2,8};
    cout<<minEle(arr,4);
    return 0;
}