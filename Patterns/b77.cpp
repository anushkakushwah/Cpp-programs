// Printing an LEFT Aligned inverted right angle triangle
#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    cout << "Enter no of rows:" ; 
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            cout << "*";
        }
        for(j=1; j<=i-1; j++){
            cout << " ";
        }
        cout << "\n" ;
    }


    return 0;
}