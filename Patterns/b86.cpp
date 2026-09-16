// printing alphabet trianlge
#include<iostream>
using namespace std;
int main(){
    char ch = 'a';
    int rows;
    cout << "Enter no of rows:";
    cin >> rows;
    int i,j;
    for(i=1;i<=rows; i++){
        for(j=1; j<=i;j++){
            cout << ch;
            ch ++;
        }
        cout << "\n";
    }
    return 0;
}