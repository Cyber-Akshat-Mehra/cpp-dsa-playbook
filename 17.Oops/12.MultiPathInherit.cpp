// MultiPath Inheritance
#include <iostream>
#include <string>
using namespace std;
class human
{
public:
    string name;

    void express()
    {
        cout<<"My name is "<<name<<endl;
    }
};

class Engineer : public human
{
public:
    string spec;

    void work()
    {
        cout << " I have Spec in " << spec << endl;
    }
};

class youtuber : public human
{
public:
    int sub;

    void creator()
    {
        cout << "I have a subscribers base of " << sub << endl;
    }
};
class TechTeacher : public Engineer, public youtuber
{
public:
    int salary;

    TechTeacher(string name, string spec, int sub, int salary)
    {
        Engineer::name = name;
        this->spec = spec;
        this->sub = sub;
        this->salary = salary;
    }

    void display()
    {
        cout << Engineer::name << " " << spec << " " << sub << " " << endl;
        Engineer::express();
        work();
        creator();
    }
};

int main()
{
    TechTeacher t1("Akshat", "AIML", 10000, 200000);
    t1.display();
    return 0;
}