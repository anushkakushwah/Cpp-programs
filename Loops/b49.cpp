// to print fibonacci series;
#include<iostream>
using namespace std;
int main(){
    int n, sum, a=0, b=1, i;
    cout << "Enter n upto which you want fabonacci series:" << endl;
    cin >> n;
    for(i=0; i<=n ; i++){
        sum = a+b;
        cout << sum<< " ";
        a = b;
        b = sum;
    }
    return 0;
}