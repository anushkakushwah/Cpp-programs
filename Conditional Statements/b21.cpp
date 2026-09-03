//program to check whether the given character is alphabet , digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter any alpha, digit or special char:"<< endl;
    cin >> ch;
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
        cout << "Your character is an alphabet" << endl;
    }else if ( ch>=48 && ch<=57){
        cout << "Your character is a digit"<< endl;
    }else{
        cout << "Special Character"<< endl;
    }
    return 0;
}