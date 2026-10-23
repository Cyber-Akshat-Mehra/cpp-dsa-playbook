// Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

// Examples :

// Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
// Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]
// Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 0, 0, 1, 1, 1, 1, 1].


//*Note :- Other method to solve
// 1.Sorting methods 
// 2. By counting 0 and 1 then add no of 0 and 1 come in count 

// 3.Two Pointer Method 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void segregate0and1(vector<int> &arr) {
    int start=0,end=arr.size()-1;
    while (start <= end)
    {
        if (arr[start] == 0)
        {
            start++;
        }else{
            if (arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++,end--;
            }else{
                end--;
            }
            
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
            
}

int main(){
    vector<int> v={0,1,0,1,0,1};
    segregate0and1(v);
    return 0;
}