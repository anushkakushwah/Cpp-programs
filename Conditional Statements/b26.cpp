//write a program to calculate simple calculator using switch case.
#include<iostream>
using namespace std;
int main(){
    int a,b,sum,mul,sub,div;
    char n;
    cout << "Enter two number of your choice:"<< endl;
    cin>> a>>b;
    cout << "Enter sign of your choice: (+,-,*,/):"<< endl;
    cin>> n;
    switch(n){
        case '+' :
          sum = a+b;
          cout<< "Sum:"<<sum;
          break;
        case '-':
          sub = a-b;
          cout<< "Sub:"<<sub;
          break;
        case '*':
          mul = a*b;
          cout<< "mul:"<<mul;
          break;
        case '/':
          div =a/b;
          cout<< "div:"<<div;
          break;
        default:
          cout << "Entered wrong operation." << endl;

    }

    return 0;
}