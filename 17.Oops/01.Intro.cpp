// Introduction To Oops
#include<iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age,roll_no;
    string grade;

    public:
    // Setter or getter function
    void setname(string n)
    {
        if(n.size()==0)
        {
            cout<<"Invalid Name ";
            return;
        }
        name=n;
    }

    void getname()
    {
        cout<<name;
    }
};

int main()
{
    Student s1;
    // s1.name="Akshat";
    // s1.age=21;
    // cout<<s1.name<<" ";

    s1.setname("akshat");
    s1.getname();
    return 0;
}
