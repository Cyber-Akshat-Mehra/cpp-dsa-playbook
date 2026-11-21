#include<iostream>
using namespace std;
int maxEle(int arr[], int index)
{
    if (index==-1)
    {
        return arr[index];
    }

   return max(arr[index],maxEle(arr,index-1));
}

int main()
{
    int arr[]={3,4,1,2,8};
    cout<<maxEle(arr,4);
    return 0;
}