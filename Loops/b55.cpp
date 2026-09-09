// to check if a number is Harshad/ Niven number
// 18 --> 1+8 = 9; and then 18 is divided by 9 completely
#include<iostream>
using namespace std;
int main(){
    int n,i,temp, sum = 0,nor;
    cout << "Enter n:" ;
    cin >> n;
    nor = n;
    while(n){
        temp = n%10;
        sum = sum + temp;
        n = n/10;
    }
    if (nor%sum == 0){
        cout << "It's Harshad/ Niven Number" ;
    }else{
        cout << "Not a harshad/ niven number:" ;
    }
    return 0;
}