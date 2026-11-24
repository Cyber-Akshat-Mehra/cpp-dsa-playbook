// Abstraction
// Displaying only essential information and hiding the detail
#include<iostream>
using namespace std;

class Customer
{
    
    string name;
    int account_number,bal,age;
    public:
    


    Customer(string name, int account_number, int bal,int age)
    {
        this->name=name;
        this->account_number=account_number;
        this->bal=bal;
        this->age=age;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            bal+=amount;
        }else{
            cout<<"Invalid Amount"<<endl;
        }
    }

    void withdraw(int amount)
    {
        if(amount<=bal && amount>0)
        {
            bal-=amount;
        }else{
            cout<<"Invalid Amount"<<endl;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<bal<<" "<<age<<endl;
    }

};


int main()
{
    Customer c1("AM",101,100000,21);
    Customer c2("BB",102,100000,17);
    Customer c3("cc",102,100000,19);
    c3.deposit(1000);
    c3.display();
    return 0;
}