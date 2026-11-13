#include<iostream>
using namespace std;

void fun(char *str1, char *str2)
{
    while (*str1=*str2)
    {
        *str1++,*str2++;
    }
    
}
int main()
{
    char first[]="Mohiit";
    char second[]="Akshat";
    fun(first, second);
    cout<<first;
    return 0;
}