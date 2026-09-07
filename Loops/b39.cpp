// to print the sum of first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout << "Enter N:" << endl;
    cin >> n;
    for (i=1; i<=n ; i++){
        sum = sum+i;
    }

cout<< "sum of number is:" << sum << endl;
    return 0;
}