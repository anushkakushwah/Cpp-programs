//Program to Implement Bank Account Operations Using Static and Dynamic Memory Allocation
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNo;
    string accountHolder;
    double balance;

public:
    BankAccount(int no, string name, double bal)
    {
        accountNo = no;
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount; // agr likha amount 0 se jyada hai to balance m add kro wrna nhi
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount No: " << accountNo << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};


int main()
{
    BankAccount account1(101, "Anu", 10000);

    cout << "STATIC OBJECT" << endl;
    account1.display();

    account1.deposit(2000); 
    account1.withdraw(3000); 

    account1.display(); 

    BankAccount *account2 = new BankAccount(102, "Riya", 15000);

    cout << "\nDYNAMIC OBJECT" << endl;
    account2->display();

    account2->deposit(5000); 
    account2->withdraw(4000);

    account2->display();

    delete account2; 
    return 0;
}