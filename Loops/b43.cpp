// to check whether the given number is armstrong
// 153 cube of all digits and sum is = n;
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int n, temp, sum=0, nreal;
    cout << "Enter number to check:" << endl;
    cin >> n;
    nreal = n;
    while(n){
        temp = n%10;
        sum = sum + (temp*temp*temp);
        n = n/10;
    }
if(sum == nreal){
    cout << "Number is armstrong"<< endl;
}else{
    cout << "Number is not armstrong" << endl;
}
    return 0;
}