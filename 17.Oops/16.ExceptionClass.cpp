// Exception Classes 
// Runtime_error is also a exception child class
#include<iostream>
using namespace std;
// We can make custom exception errors class
class InvalidAmountError :public runtime_error
{
    public:
    InvalidAmountError(const string &msg):runtime_error(msg){}
};
class Customer
{
    protected:
    string name;
    int balance, acc_num;

    public:
    Customer(string name, int balance, int acc_num)
    {
        this->name=name;
        this->balance=balance;
        this->acc_num=acc_num;
    }

    void deposit(int amount)
    {
        if(amount <= 0)
            throw InvalidAmountError( "amount should be greater than 0");

        balance+=amount;
        cout<<amount<<" is successfully credited \n";
    }

    void withdraw(int amount)
    {
        if (amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" is successfully debited \n";
        }
        else if (amount < 0)
        {
            throw runtime_error ("amount should be greater than 0 ");
        }
        else{
            throw "Your balance is low";
        }
    }
};
int main()
{
    Customer c1("Am",5000,5);
    try{
        c1.deposit(100);
        c1.withdraw(10000);
        c1.deposit(100);
    }
    catch(const runtime_error &e)
    {
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
    // We Can write multiple catch block 
    catch(const InvalidAmountError &e)
    {
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
    catch(...) //Default Catch block
    {
        cout<<"Exception Occured "<<endl;
    }
    return 0;
}