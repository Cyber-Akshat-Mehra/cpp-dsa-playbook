/* An exception is an unexpected problem that arise during the execution of
a program and our program terminates suddenly with some errors and issues.
Three Components :- 
1. Try 
2. Catch 
3. Throw  */

/* The try keyword represents a block of code that may throw an exception
placed inside the try block. It's followed by one or more catch blocks. 
If an exception occurs, try block throws that exception.  */

/* The catch statement represents a block of code that is executed when a 
particular execution is thrown from the try block. The code to handle the exception
is written inside the catch block. */

/* An exception in c++ can be thrown using the throw keyword. 
When a program encounters a throw statement, then it immediately terminates the 
current function and starts finding a matching catch block to handle the thrown execution. */

#include<iostream>
using namespace std;
int main()
{
    // Example 1
    // int a,b;
    // cin>>a>>b;
    // try
    // {
    //     if (b==0)
    //     {
    //         throw "Divide by zero is not possible ";
    //     }
    //     int c=a/b;
    //     cout<<c<<endl;
    // }
    // catch(const char *e)
    // {
    //     cout<<"Exception Occured: "<<e<<endl;
    // }
    

    // Example 2
    try
    {
        int *p=new int[100000000000000000];
        cout<<"Memory Allocation Successfully \n";
        delete []p;
    }
    catch(const exception &e)//Exception class
    {
        cout<<"Exception Occured: " << e.what() << '\n';
    }
    
    return 0;
}

