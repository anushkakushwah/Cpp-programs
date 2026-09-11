// Product of all digits
#include<iostream>
using namespace std;
int main(){
    int n, temp, i, product = 1;
    cout << "Enter n:";
    cin >> n;
    while(n>0){
        temp = n%10;
        product = product * temp;
        n = n/10;
    }
    cout << "Product of digits is: "<< product ;  
    return 0;
}