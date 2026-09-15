// To generate  a diamond pattern
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter number of rows:" ;
    cin >> n;
    int rows = (2*n)-1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout << " ";
        }
        for(j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout<< "\n" ;
    }
    for(i=1; i<=rows-n; i++){
        for(j=1; j<=i; j++){
        cout << " ";
    }

        for(j=1; j<=2*(n-i)-1; j++){
        cout << "*";
    }

        cout << "\n";
    }
    return 0;
}