// Print all factors and calculate sum of all divisors
#include<iostream>
using namespace std;
int main(){
    int n,i,div,fac,sum=0,j;
    cout << "Enter number:" ;
    cin >> n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            cout << "Factor:" << i << " " << endl;
        }
    }
    for (j=1; j<n; j++){
        if (n%j==0){
            sum = sum+j;
        }
    }
    cout << "Sum of divisors:" << sum;
    return 0;
}