// check whether given number is strong or not
// definition for strong number : a numbers which is equal to the sum of the factorial of its digit.
#include<iostream>
using namespace std;
int main(){
    int n, temp, factor, nreal,i, sum =0;
    cout << "Enter n:" << endl;
    cin >> n;
    nreal = n; //145
    while(n){
        temp = n%10; // 5
        factor = 1;
        for(i=1; i<=temp; i++){
            factor = factor * i;
        }
        sum = sum + factor; //0+120
        n = n/10; //14
    }
    if(sum == nreal){
        cout << "Number is strong." << endl;
    }else{
        cout << "Number is not strong." << endl;
    }





    return 0;
}