// to check if a given number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime = 0;
    cout << "Enter a number to check:" ;
    cin >> n;
    for(i=2; i<n; i++){
        if(n%i==0){
            isPrime ++;
        }
    }

if(isPrime == 0){
    cout << "Given number is prime." << endl;
}else{
    cout << "Given number is not prime" << endl;
}

    return 0;
}