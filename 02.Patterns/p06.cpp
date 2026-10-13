//a a a a a 
//b b b b b
//c c c c c
//d d d d d
//e e e e e

#include <iostream> 
using namespace std;
int main () {
    for(int i=0;i<5;i++)
    {
        char name= 'a' + i;
        for (int j=1;j<=5; j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
