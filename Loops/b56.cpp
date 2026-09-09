// to find digital root of a number
//adding digits of number until and unless we get a single digit
#include<iostream>
using namespace std;
int main(){
    int n,i,j,sum =0, temp, temp1, sum1 =0;
    cout << "Enter n:";
    cin >> n;
    while(n){
        temp = n%10;
        sum = sum + temp;
        n = n/10; // yahan se we will get sum of digit once
    }
    while(sum>10){
        temp1= sum%10;
        sum1 = sum1+ temp;
        sum = sum/10;
        }
    cout << "Digital Root:" << sum << endl;

    return 0;
}