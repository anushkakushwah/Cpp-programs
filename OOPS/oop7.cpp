#include<iostream>
using namespace std;

class Student
{
    int rollNo;
    string studentName;

    static int count;

public:
    void getData()
    {
        cout<<"Enter Roll Number: ";
        cin>>rollNo;

        cout<<"Enter Student Name: ";
        cin>>studentName;

        count++;
    }

    static void showCount()
    {
        cout<<"\nTotal Students = "<<count;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.getData();
    s2.getData();
    s3.getData();

    Student::showCount();

    return 0;
}
