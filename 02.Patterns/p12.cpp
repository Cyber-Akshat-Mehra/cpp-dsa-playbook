//a 
//b b 
//c c c 
//d d d d 
//e e e e e

#include <iostream> 
using namespace std;
int main () {
    for(int i=0;i<5;i++)
    {
        char name= 'a' + i;
        for (int j=0;j<=i; j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
