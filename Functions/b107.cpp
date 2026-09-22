// Write a function to check if a number is prime
#include<iostream>
using namespace std;
void checkPrime(int n){
    int isPrime  = 1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout << "Number is not prime.";
            break;
        }else{
            isPrime ++;
        }
    }
    if(isPrime > 1){
        cout << "Number is prime.";
    }
}
int main(){
    int x;
    cout << "Enter x:" ;
    cin >> x;
    checkPrime(x);
    
}