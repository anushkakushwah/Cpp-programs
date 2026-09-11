// print cube series
#include<iostream>
using namespace std;
int main(){
    int n, cube, i;
    cout << "Enter N:" ;
    cin >> n;
    for (i=1; i<=n; i++){
        cube = i*i*i;
        cout << cube << " ";
    }
    return 0;
}