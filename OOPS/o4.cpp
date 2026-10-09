// creating class and dynamic objects
#include<iostream>
using namespace std;
class Students{
	public:
		string name;
		int roll;
		int age;
		string branch;
		// for taking inputs from the user
		void userinput(){
			cout << "Enter Student Name:";
			cin >> name;
			cout << "Enter Roll no of student:";
			cin >> roll;
			cout << "Enter age:";
			cin >> age;
			cout << "Enter the branch:";
			cin >> branch;
		}
		// for displaying the input taken
		void display(){
			cout << "Name:" << name << endl;
			cout << "Roll No:" << roll << endl;
			cout << "Age:" << age << endl;
			cout << "Branch:" << branch << endl;
		}
};
int main(){
	// asking how many object should be created
	int n;
	cout << "Enter object Number:" << endl;
	cin >> n;
	Students *s= new Students[n];
	for(int i =0; i<n; i++){
		cout << "Enter students detail:"<< endl;
		cout << i+1;
		s[i].userinput();
	}
	// showing the objects
	for(int i = 0; i<n; i++){
		s[i].display();
	}
	delete[] s;
}