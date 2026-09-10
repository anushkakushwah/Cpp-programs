// sum of all odd numbers from 1 to N
#include<iostream>
using namespace std;
int main(){
    int n, i, sum =0;
    cout << "Enter N:";
    cin >> n;
    for(i=1; i<=n; i++){
        if(i%2!=0){
            cout <<i << " " << endl;
            sum = sum+i;
        }
    }
    cout << "Sum of odd numbers:" << sum << endl;
    return 0;
}