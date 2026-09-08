// printing tables from one to n;
#include<iostream>
using namespace std;
int main(){
    int n, table, i, j;
    cout << "Enter n:";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j=1; j<=10; j++){
        table = j*i;
        cout << table << "\t";
    }
    cout << endl;
}

    return 0;
}