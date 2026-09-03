// program to check whether the character is in upper or lower case
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter character:" << endl;
    cin >> ch;
    if(ch>=65 && ch<=90){
        cout<< "Uppercase."<< endl;
    }else if (ch>=97 && ch<=122){
        cout << "Lowercase." << endl;
    }else{
        cout << "Invalid character" <<endl;
    }

    return 0;
}