#include <iostream>
using namespace std;
class student
{
public:
    void std_display()
    {
        cout << "I am student \n";
    }
};

class male
{
public:
    void male_display()
    {
        cout << "I am Male \n";
    }
};

class female
{
public:
    void female_display()
    {
        cout << "I am female \n";
    }
};

class boy : public student, public male
{
public:
    void boy_display()
    {
        cout << "I am boy \n";
    }
};

class girls : public student, public female
{
public:
    void girl_display()
    {
        cout << "I am Girl \n";
    }
};

int main()
{
    girls g1;
    g1.female_display();
    g1.girl_display();
    g1.std_display();
    boy b1;
    b1.boy_display();
    b1.male_display();
    b1.std_display();
    return 0;
}