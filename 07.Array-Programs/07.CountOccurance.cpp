//[1,2,4,4,4,4,6] 4 occured 4 times 
#include <iostream>
using namespace std;

void SearchRange(int arr[], int target, int n)
{
    int start = 0, end = n - 1, first = -1, last = -1, mid;
    while (start <= end)
    {
        // find first
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // find last
    start = 0, end = n - 1;
    while (start <= end)
    {
        // find last
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if(first==-1 && last==-1){
            cout<< 0;
        
        }
        else{
            cout<<(last-first)+1;
        }
    
}
int main()
{
    int arr[7]={1,2,4,4,4,4,4};
    SearchRange(arr,4,7);
    return 0;
}