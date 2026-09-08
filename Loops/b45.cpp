// find the sum of the digits
#include<iostream>
using namespace std;
int main(){
    int n, sum =0 , temp;
    cout << "Enter n:" << endl;
    cin >> n;
    while(n){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    cout << "Sum of digits:"<<  sum<< endl;

    return 0;
}