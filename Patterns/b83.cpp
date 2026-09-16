// Floyds triangle
#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    int num = 1;
    cout << "Enter num of rows:" ;
    cin >> rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            cout << num << " ";
            num = num+1;
        }
        cout << "\n";
    }

    return 0;
}