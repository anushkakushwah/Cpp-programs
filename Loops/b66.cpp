// Count even and odd digits
#include<iostream>
using namespace std;
int main(){
    int n, temp, i, ecount = 0, ocount = 0;
    cout << "Enter n:";
    cin >> n;
    while(n>0){
        temp = n%10;
        if(temp%2==0){
            ecount ++;
        }else{
            ocount ++;
        }
        n = n/10;   
    }
    cout << "Count of even digit:" << ecount << endl;
    cout << "Count of odd digit:" << ocount << endl;
    return 0;
}