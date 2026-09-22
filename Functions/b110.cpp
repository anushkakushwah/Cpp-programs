// Write a function to reverse a number
#include<iostream>
using namespace std;
int numRev(int n){
    int temp,i, rev=0;
    while(n>0){
        temp = n%10;
        rev = rev*10+temp;
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cout << "Enter n:";
    cin >> n;
    cout << numRev(n);
}