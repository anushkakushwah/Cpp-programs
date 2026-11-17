//Create a class demonstrating a parameterized constructor.
#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    int age;
    float salary;

    Teacher(string name, int age, float salary){
        this->name = name;
        this ->age = age;
        this ->salary = salary;
    }
};
int main(){
    Teacher t1("Dipali", 56, 700000);
    cout << "Teacher name is :" << t1.name << endl;
    cout << "Teacher age is:" <<  t1.age << endl;

}