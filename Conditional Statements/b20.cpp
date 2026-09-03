//write a program to check whether the number is divisible by 5 and 11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    if(n%5==0 && n%11==0){
        cout << "Number divisible by both 5 and 11" << endl;
    }else if (n%5==0 && n%11 !=0){
        cout << "Number is divisible by 5 but not 11" << endl;
    }else if (n%5!=0 && n%11==0){
        cout << "Number is divisible by 11 but not 5"<< endl;
    }else{
        cout << "Number not divisible by any of the number 5 or 11" << endl;
    }
    return 0;
}