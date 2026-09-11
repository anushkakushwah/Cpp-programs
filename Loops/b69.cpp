// print square series
#include<iostream>
using namespace std;
int main(){
    int n, square, i;
    cout << "Enter N:" ;
    cin >> n;
    for (i=1; i<=n; i++){
        square = i*i;
        cout << square << " ";
    }
    return 0;
}