// creating dynamic instance
#include<iostream>
using namespace std;
class Students{
    public:
        string name;
        int roll_no;
        int age;
        string branch;
        // creating function
        void display(){
            cout << "name=" << name << endl;
            cout << "roll no=" << roll_no << endl;
            cout << "age=" << age << endl;
            cout << "branch=" << branch << endl;
        }
};
int main(){
    // for dynamic instance
    Students *s1 = new Students;
    s1 -> name = "Anushka";
    s1 -> roll_no = 127;
    s1 -> age = 19;
    s1 -> branch = "CSE";

    s1 -> display();
}
