//Create a class with private data members and public getter/setter functions.
#include<iostream>
using namespace std;
class Teacher{
    private:
    float salary;
    public:
    string name;
    int age;
    
    //setter function
    void increaseSalary(int bonus){
        salary = salary+ bonus;
    }
    //getter function
    float getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name = "Shikha Sharma";
    t1.age = 50;
    t1.increaseSalary(100000);
    cout << "Salary of " << t1.name << " is: " <<t1.getSalary();

}