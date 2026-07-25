// swapping variable without third variable wit mul div
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter a and b:" << endl;
    cin >> a>> b;
    a= a*b;
    b= a/b;
    a= a/b;
    cout << "Value of a after swap :"<< a<< endl;
    cout << "Value of a after swap :"<< b<< endl;
    return 0;
}