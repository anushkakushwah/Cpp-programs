#include<iostream>
using namespace std;

class BankAccount
{
private:
    long long accountNo;
    float balance;

public:
    void setDetails()
    {
        cout<<"Enter Account Number: ";
        cin>>accountNo;

        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }

    void deposit()
    {
        float amount;

        cout<<"Enter Deposit Amount: ";
        cin>>amount;

        if(amount > 0)
        {
            balance = balance + amount;
            cout<<"Amount Deposited Successfully!"<<endl;
        }
        else
        {
            cout<<"Invalid Amount!"<<endl;
        }
    }

    void display()
    {
        cout<<"Account Number: "<<accountNo<<endl;
        cout<<"Current Balance: "<<balance;
    }
};

int main()
{
    BankAccount customer;

    customer.setDetails();
    customer.deposit();
    customer.display();

    return 0;
}
