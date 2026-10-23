//Search element in array and return its index

#include<iostream>
using namespace std;
int main() {
    int arr[5]={2,1,6,4,7};
    int x,ans;
    cout<<"Enter element : ";
    cin>>x;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==x)
        {
            ans=i;
        }
        
    }
    cout<<"Element Found at index "<<ans;
    
    return 0;
}