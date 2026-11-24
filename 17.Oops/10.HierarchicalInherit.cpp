// Hierarchical Inheritance
#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;
};

class student : public human
{
    int roll_no, fees;

public:
    student(string name, int age, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void Std_display()
    {
        cout << name << " " << age << " " << roll_no << " " << fees << endl;
    }
};

class teacher : public human
{
    int salary;

public:
    teacher(int salary, int age, string name)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void tec_display()
    {
        cout << name << " " << age << " " << salary << endl;
    }
};
int main()
{
    student S1("Akshat", 21, 05, 175000);
    teacher T1(20000,26,"AM");
    S1.Std_display();
    T1.tec_display();
    return 0;
}
