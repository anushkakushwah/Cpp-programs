//Write a program to calculate gross salary based on basic salary
//HRA (House Rent Allowance) = 20% of Basic Salary
//DA (Dearness Allowance) = 50% of Basic Salary
//Gross Salary = Basic Salary + HRA + DA
#include<iostream>
using namespace std;
int main(){
    float salary, hra, da, gross;
    cout << "Enter the salary of a person:" << endl;
    cin >> salary;
    hra = (20.0/100.00)*salary;
    da= (50.0/100.00)*salary;
    gross = hra + da + salary;
    cout << "Gross salary of the person is :" << gross;









    return 0;
}