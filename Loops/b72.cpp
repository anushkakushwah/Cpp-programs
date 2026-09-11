// to print the sum factorial series upto n
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0, i,j;
    cout << "Enter N:" << endl;
    cin >> n;
    for(j=1; j<=n; j++){
        int fact =1;
        for(i=1; i<=j; i++){
            fact = fact*i;
        }
        sum = sum + fact;
    }
    cout << "Sum of factorial is:" << sum << endl;
    return 0;
}