// creation of structs and calling of struct members
#include<iostream>
using namespace std;
struct Students{
    string Name;
    int roll_no;
    float marks;
};
// or
int main(){
    
    // s1.Name = "Ram";
    // s1.roll_no = 54;
    // s1.marks = 699.5;
    Students s1 = {"Ram", 69, 656.7};
    cout << "Name of student:" << s1.Name << endl;
    cout << "Roll no is:" << s1.roll_no << endl;
    cout << "marks:" << s1.marks << endl;
}