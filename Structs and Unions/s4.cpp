// Structures and functions
#include<iostream>
using namespace std;
struct Student{
    int roll;
    string name;
};
void display(Student s){ // structures can bee passed as argument in function
    cout<< s.roll << endl;
    cout << s.name << endl;
}
int main(){
    Student s1 = {27, "Anushka"};
    display(s1);
    return 0;
}