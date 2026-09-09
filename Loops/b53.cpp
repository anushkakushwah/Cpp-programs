// to check if a number is perfect or not
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout << "Enter a number to check:";
    cin >> n;
    for (i=1; i<n; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum == n){
        cout << "A perfect number";
    }else{
        cout << "Not a perfect number" ;
    }
    return 0;
}
