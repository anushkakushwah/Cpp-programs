#include<iostream>
using namespace std;
string clgname = "SAIT"; // global variable
class Student{
	public:
		int rollno;
		static int marks;
		void display(){
			
		}
		static void show(){
			int x = 200;
			cout << x<< endl;
			cout <<"Static Member Function." << endl;
			cout << "Marks:" << marks << endl;
			cout << clgname << endl;
		}
};
int Student::marks = 90;
int main(){
	Student s1;
	s1.rollno= 101;
	Student::show();
}