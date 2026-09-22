// Write a function to find maximum of two numbers.
#include<iostream>
using namespace std;
int maxnum(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b;
    cout << "Enter a & b:" ;
    cin >> a>>b;
    cout << "Maximum number is:" << maxnum(a,b);
}