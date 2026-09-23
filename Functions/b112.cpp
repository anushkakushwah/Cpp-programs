// Write a function to check palindrome numberr and not
#include<iostream>
using namespace std;
void checkPal(int n){
    int temp,rev =0, original;
    original = n;
    while(n>0){
        temp = n%10;
        rev = rev*10+ temp;
        n = n/10;
    }
    if(rev==original){
        cout << "Palindrome." ;
    }else{
        cout << "Not a Palindrome." ;
    }
}
int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    checkPal(n);
}