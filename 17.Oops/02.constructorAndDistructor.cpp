// Constructor And Distructor in Oops 
#include <iostream>
using namespace std;
class Customer
{
    string name;
    int Acc_num;
    int bal;

public:
    // default Constructor
    // Customer()
    // {
    //     cout<<"This is Constructor";
    // }

    // Customer()
    // {
    //     name = "Akshat";
    //     Acc_num = 5;
    //     bal = 1000000000;
    // }

    // Parameterize Constructor
    // Customer(string a, int b, int c)
    // {
    //     name = a;
    //     Acc_num = b;
    //     bal = c;
    // }

    // This Pointer
    // Customer(string name, int Acc_num, int bal)
    // {
    //     this->name = name;
    //     this->Acc_num = Acc_num;
    //     this->bal = bal;
    // }

    // Inline Constructor
    // inline Customer(string a, int b, int c) : name(a), Acc_num(b), bal(c) {}

    // It by default create a copy costructor 
    // User Define Copy Constructor
    // Customer(Customer &b)
    // {
    //     name=b.name;
    //     Acc_num=b.Acc_num;
    //     bal=b.bal;
    // }

    // Destructor
    // ~Customer()
    // {
    //     cout<<"Destructor is called "<<endl;
    // }

    // Note 
    // Constructor is called in Increasing Order Ex Const 1 , Const 2, const 3.
    // Destructor is called in decreaing order or reverse order Ex:- Dest 3, Dest 2, Dest 3. 
    // void display()
    // {
    //     cout << name << " " << Acc_num << " " << bal << endl;
    // }
};


class Student
{
    string name;
    int *data;
    public:

    Student()
    {
        name="4";
        cout<<"Constructor "<<name<<" called"<<endl;
    }
    Student(string name)
    {
        this->name=name;
        cout<<"Constructor "<<name<<" called"<<endl;
    }
    ~Student()
    {
        cout<<"Destructor "<<name<<" called"<<endl;
    }

};
int main()
{
    // Customer c1("akshat", 5, 100000);
    // Customer c2(c1);
    // c1.display();
    // c2.display();

    Student s1("1"),s2("2"),s3("3");
    Student *s4=new Student;
    delete s4; //This is way to release dynamically allocated memory 
    return 0;
}