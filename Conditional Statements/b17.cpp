//write a program to check whether given number is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number of your choice:" << endl;
    cin >> a;
    if(a%2==0){
        cout << "Given number is even" << endl;
    }elif(a%2!=0){
        cout << "Given number is odd" << endl;
    }else{
        cout << "Invalid number for even odd check" << endl;
    }

    return 0;
}