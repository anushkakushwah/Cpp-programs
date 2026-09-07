// Calculating the factorial of a number
#include<iostream>
using namespace std;
int main(){
    int n,i, fact =1;
    cout << "Enter number to find factorial:"<< endl;
    cin >> n;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }
cout << "Factorial of a num is:"<< fact << endl;

    return 0;
}