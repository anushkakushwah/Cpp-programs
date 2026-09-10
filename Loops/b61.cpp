// to calculate lcm of two numbers;
#include<iostream>
using namespace std;
int main(){
    int i, n1,n2;
    cout << "Enter n1 & n2:" ;
    cin >> n1>> n2;
    int lcm = max(n1,n2);
    while(lcm%n1 != 0 || lcm % n2 !=0){
        lcm ++;
    }
    cout << "Lcm is:" << lcm;
    return 0;
}