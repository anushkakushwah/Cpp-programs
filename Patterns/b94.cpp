// To print hourglass pattern
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter n:";
    cin >> n;

    // for printing upper triangle
    for(i=1; i<=n; i++){
        for(j=1; j<=i-1; j++){
            cout << " ";
        }

        // CORRECTED
        for(j=1; j<=2*n-2*i+1; j++){
            cout << "*";
        }

        // CORRECTED
        cout << "\n";
    }

    // for lower triangle
    for(i=1; i<=n-1; i++){
        for(j=1; j<=n-i-1; j++){
            cout << " ";
        }

        // CORRECTED
        for(j=1; j<=2*i+1; j++){
            cout << "*";
        }

        // CORRECTED
        cout << "\n";
    }

    return 0;
}