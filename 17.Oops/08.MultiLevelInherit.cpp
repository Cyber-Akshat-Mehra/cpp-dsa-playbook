// Multilevel Inheritance
#include <iostream>
using namespace std;

class person
{
protected:
    string name;

public:
    void intro()
    {
        cout << "Hello my name is " << name << endl;
    }
};
class employee : public person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My monthly salary is " << salary << endl;
    }
};

class manager : public employee
{
public:
    string department;

    manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout << "I am leading the department " << department << endl;
    }
};
int main()
{
    manager A1("Akshat", 1000000, "AIML");
    A1.work();
    A1.intro();
    A1.monthly_salary();
    return 0;
}