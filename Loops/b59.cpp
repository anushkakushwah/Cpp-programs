// To calculate power without using library functions
#include<iostream>
using namespace std;
int main(){
    int n, pow, i, cal_pow = 1;
    cout << "Enter a number to calculate power and it's power:" ;
    cin >> n>> pow;
    for (i=1; i<=pow; i++){
        cal_pow = cal_pow*n;
    }
    cout << "Power calculated:" << cal_pow << endl;

    return 0;
}