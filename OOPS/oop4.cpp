#include<iostream>
using namespace std;

class Employee
{
    int empId;
    string empName;
    float salary;

public:
    void getDetails()
    {
        cout<<"Enter Employee ID: ";
        cin>>empId;

        cout<<"Enter Name: ";
        cin>>empName;

        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void showDetails()
    {
        cout<<"\nEmployee ID: "<<empId;
        cout<<"\nEmployee Name: "<<empName;
        cout<<"\nSalary: "<<salary;
    }
};

int main()
{
    Employee e1;

    e1.getDetails();
    e1.showDetails();

    return 0;
}
