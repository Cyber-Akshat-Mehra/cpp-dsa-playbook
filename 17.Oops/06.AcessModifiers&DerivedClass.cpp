// Access Modifiers and Derived Class

// Access Modifiera 
// public :- Can access within a class , derived class and external code also
// protected :- Can access within a class and derived class but cannot access in external code 
// private :- Can access within a class but cannot access in  derived class and  external code
// private > protected > public 
#include<iostream>
using namespace std;
class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    // Can access everyone in the same class
    void test()
    {
        a=10; 
        b=20;
        c=30;
    }
};

// Derived Class
class Student : public human
{
    private:
    void test2()
    {
        // Can acess only public and protected variable in derived class
        // a=10;
        b=50;
        c=30;
    }
};

int main()
{
    human akshat;

    // Can access only public variable in external code 
    // akshat.a=10;
    // akshat.b=10;
    akshat.c=10;
}