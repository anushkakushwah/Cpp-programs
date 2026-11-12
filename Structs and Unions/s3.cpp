// Nested Structures struct inside structs
#include<iostream>
using namespace std;
struct Address{
    int pin;
    string city;
};
struct Student{
    string name;
    int rollno;
    Address add; // it is struct inside struct
};
int main(){
    Student s1 = {"Anushka", 27, {453111, "Indore"}};
    cout << "Name:" << s1.name << endl;
    cout << "Roll no:" << s1.rollno << endl;
    cout << "Pin code :" << s1.add.pin << endl;
    cout << "City:" << s1.add.city<< endl;
}
