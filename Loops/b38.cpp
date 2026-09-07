// printing numbers from 100 to 1 back
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter n to start:" << endl;
    cin >> n;
    for (i=n; i>=1 ; i--){
        cout << i << endl;
    }
    return 0;
}