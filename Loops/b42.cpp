// to check a number if it is palindrome or not means 727 = 727
#include<iostream>
using namespace std;
int main(){
    int n,i,temp, nreal,rev=0;
    cout << "Enter the number to check:";
    cin >> n ;
    nreal = n;
    while(n){
        temp = n%10;
        cout << temp;
        rev = rev*10+temp;
        n = n/10;
    }

if(rev == nreal){
    cout << "Number is palindrome." << endl;
}else{
    cout << "Number is not palindrome." << endl;
}

    return 0;
}