// finding reverse of a number
#include<iostream>
using namespace std;
int main(){
    int n, i, temp;
    cout << "Enter a number:" << endl;
    cin >> n;
    while(n){
        temp = n%10;
        cout << temp;
        n = n/10;
    }
    return 0;
}