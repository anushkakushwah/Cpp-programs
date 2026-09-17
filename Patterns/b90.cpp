#include<iostream>
using namespace std;
int main(){
    int l,b,i,j;
    cout << "Enter length and breadth:" ;
    cin >> l >> b;
    for(i=1; i<=b; i++){
        for(j=1; j<=l; j++){
            if(i==1 || i==b || j==1 || j==l){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << "\n";
    }





    return 0;
}