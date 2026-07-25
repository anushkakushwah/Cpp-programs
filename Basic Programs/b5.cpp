//program to calculate simple and compound interest
#include <iostream>
using namespace std ;
#include <cmath>
int main (){
    int t,p;
    float r, ci, si;
    cout << "Enter the principal and time:" << endl;
    cin >> p >> t;
    cout << "Enter the rate for the amount " << endl;
    cin >> r;
    si = (p*r*t)/100.00;
    ci = p * (1+pow(t,(r/100.00)))- p;
    cout << "Simple Interest is:" << si;
    cout << "Compound Interest is:" << ci;
    return 0;
}