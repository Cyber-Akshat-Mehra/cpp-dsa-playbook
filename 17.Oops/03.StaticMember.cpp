// static Member 
// They are attributes of classes or class member
#include<iostream>
using namespace std;

class Customer
{
    
    string name;
    int account_number,bal;
    static int total_customer;
    static int total_bal;
    public:
    


    Customer(string name, int account_number, int bal)
    {
        this->name=name;
        this->account_number=account_number;
        this->bal=bal;
        total_customer++;
        total_bal+=bal;
    }
    // Static Member function
    static void acesStatic()
    {
        cout<<"Total Customer : "<<total_customer<<endl;
        cout<<"Total Balance : "<<total_bal<<endl;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            bal+=amount;
            total_bal+=amount;
        }
    }

    void withdraw(int amount)
    {
        if(amount<=bal && amount>0)
        {
            bal-=amount;
            total_bal-=amount;
        }
    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<bal<<" "<<total_customer<<endl;
    }

    void display_total()
    {
        cout<<total_customer<<endl;
    }
};
int Customer::total_customer=0;
int Customer::total_bal=0;

int main()
{
    Customer c1("AM",101,100000);
    Customer c2("BB",102,100000);
    // c1.display();
    // c2.display();
    // c1.display_total();
    Customer c3("BB",102,100000);
    // c1.display_total(); 
    // c3.display();

    // Customer::total_customer=5; //Access only if the static memeber is public
    // Customer::acesStatic(); //Static memeber function can access private static member only 
    c1.withdraw(1000);
    c1.display();
    Customer::acesStatic();
    

    return 0;
}