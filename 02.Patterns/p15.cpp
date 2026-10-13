// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include <iostream> 
using namespace std;
int main () {
    for(int i=1;i<=5;i++)
    {
        for (int j=5;j>=5-i+1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}