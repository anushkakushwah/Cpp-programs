// printing reverse number triangle
#include<iostream>
using namespace std;
int main(){
    int rows, i,j;
    cout << "Enter no of rows:" ;
    cin >> rows;
    for(i=1; i<=rows; i++){
        for(j=rows; j>=i; j--){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}