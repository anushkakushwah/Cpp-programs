// pointers in structures
#include<iostream>
using namespace std;
struct Employee{
    int empid;
    string empname;
    string department;
};
int main(){
    Employee e1 = {1211, "Rajiv Gour", "Senior Branch"};
    Employee* ptr = &e1;
    cout << "Empid of Employe:" << ptr->empid << endl;
    cout << "Employee name:" << ptr->empname << endl;
    cout << "Department of emp:" << (*ptr).department << endl;
}