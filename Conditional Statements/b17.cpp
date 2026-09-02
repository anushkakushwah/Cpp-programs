//write a program to check whether given number is even or odd
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number of your choice:" << endl;
    cin >> n;
    if(n%2==0){
        cout << "Given number is even" << endl;
    }else if(n%2!=0){
        cout << "Given number is odd" << endl;
    }else{
        cout << "Invalid number for even odd check" << endl;
    }

    return 0;
}