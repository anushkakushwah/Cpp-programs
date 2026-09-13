// To print RIGHT Aligned Right angle triangle
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter number of rows:" ;
    cin >> n;
    for(i=1;i<=n;i++){
        // for spaces
        for(j=1; j<=n-i; j++){
            cout << " ";
        }

        // for stars
        for(j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}