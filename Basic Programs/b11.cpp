//Write a program to check whether a number is positive, negative or zero. 
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number of your choice:"<< endl;
    cin >> num;
    if (num==0){
        cout << "Given number is zero." << endl;
    }else{
        if(num>0){
            cout << "Given number is positive." <<endl;
        }else{
            cout << "Given number is negative." << endl;
        }
    }
    return 0;
}