// write a function to calculate power of a number
#include<iostream>
using namespace std;
int calPower(int n, int p){
    int i,j,power = 1;
    for(i=1; i<=p; i++){
        power = power*n;
    }
    return power;
}
int main(){
    int n,p;
    cout << "Enter n with power you want to find:" ;
    cin >> n>>p;
    cout << calPower(n,p);
    return 0;
}
