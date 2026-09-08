// to print multiplicationtable
#include<iostream>
using namespace std;
int main(){
    int n, i, table;
    cout << "Enter number to print table of:";
    cin >> n;
    for (i=1; i<=10; i++){
        table = n*i;
        cout << table << endl;
    }
    return 0;
}