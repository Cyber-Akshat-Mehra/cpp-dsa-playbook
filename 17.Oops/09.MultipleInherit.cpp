// Multiple Inheritance
#include<iostream>
using namespace std;

class Engineer
{
    public:
    string spec;

    void work()
    {
        cout<<" I have Spec in "<<spec<<endl;
    }
};

class youtuber
{
    public:
    int sub;

    void creator()
    {
        cout<<"I have a subscribers base of"<<sub<<endl;
    }
};
class TechTeacher: public Engineer, public youtuber
{
    public:
    string name;

    TechTeacher(string name, string spec, int sub)
    {
        this->name=name;
        this->spec=spec;
        this->sub=sub;
    }

    void display()
    {
        cout<<name<<" "<<spec<<" "<<sub<<" "<<endl;
        work();
        creator();
    }
};

int main()
{
    TechTeacher t1("Akshat", "AIML", 0);
    t1.display();
    return 0;
}