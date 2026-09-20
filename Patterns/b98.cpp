// Sqaure pattern continuous series
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter n:";
    cin >> n;
    int k =1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n ;  j++){
            cout << k;
            k++;
        }
        cout << "\n";
    }
    return 0;
}