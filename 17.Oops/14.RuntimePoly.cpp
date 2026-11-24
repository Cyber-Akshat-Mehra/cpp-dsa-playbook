// Runtime Polymorphism
// We use Virtual Keyword 
#include<iostream>
#include<vector>
using namespace std;
class animal
{
    public:
    // virtual void speak()=0 //Pure virtual Function 
    // The class should be abstract means no object should be created for pure virtual function
    virtual void speak()
    {
        cout<<"HuHU \n ";
    }
};
class dog : public animal
{
    public:
    void speak()
    {
        cout<<"Bark \n";
    }
};

class cat : public animal
{
    public:
    void speak()
    {
        cout<<"Meowww \n";
    }
};
int main()
{
    // animal *p;
    // p=new dog();
    // p->speak();

    animal *p;
    vector<animal*> animals;
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new animal());
    animals.push_back(new dog());
    animals.push_back(new cat());
    for (int i = 0; i < animals.size(); i++)
    {
        p=animals[i];
        p->speak();
    }
    
    return 0;
}