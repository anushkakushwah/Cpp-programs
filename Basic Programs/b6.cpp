//write a program to swap two numbers without using third variable 
#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout << "Enter a and b:"<< endl;
    cin >> a>>b;
    a= a+b;
    b= a-b;
    a= a-b;
    cout << "Value of a after swap:" << a << endl;
    cout << "Value of b after swap:" << b << endl;

    return 0;
}