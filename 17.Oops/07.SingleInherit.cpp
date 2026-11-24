// Single Inheritance
#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void work()
    {
        cout << "I am working \n";
    }
};

class student : public human
{
    int roll_no, fees;

public:
    // student(string name, int age, int roll_no, int fees)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->roll_no = roll_no;
    //     this->fees = fees;
    // }

    // Another Approach
    student(string name, int age, int roll_no, int fees):human(name,age)
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};
int main()
{
    student S1("Akshat", 21, 05, 175000);
    S1.work();
    S1.display();
    return 0;
}
