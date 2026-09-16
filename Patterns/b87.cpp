// Printing Reverse Alphabet Triangle
#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout << "Enter no of rows:";
    cin >> rows;
    for(i=1; i<=rows; i++){
        char ch = 'A';
        for(j=1; j<=rows-i+1; j++){
            
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }






    return 0;
}