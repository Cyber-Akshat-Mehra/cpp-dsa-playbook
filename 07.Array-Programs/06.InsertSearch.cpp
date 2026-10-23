//using binary search search the element position if element is not present where it can be come 
//ex [1,2,3,4,5] target=3 it is at index 2
//ex [1,2,4,5,6] target 3 it can come at 2

#include <iostream>
using namespace std;

int searchInsert(int arr[], int target, int size){
    int start=0,end=size-1,ans=size,mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==target)
        {
            ans=mid;
            break;
        }else if (arr[mid]<target)
        {
            start=mid+1;
        }else{
            ans=mid;
            end=mid-1;
        }
    }
    return ans;
    
}
int main(){
    int arr[6]={1,2,3,5,6,8};
    cout<<searchInsert(arr,4,6);
    return 0;
}