//Write a function to swap numbers using call by reference.
#include<iostream>
using namespace std;
int swapNum(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main(){
    int a,b;
    cout << "Enter A and B:" ;
    cin >> a >> b;
    cout << "Before swap value of a and b :" << a << " " << b << endl;
    swapNum(a,b);
    cout << "After swap value of a and b:" << a << " " << b;
    return 0;
    
}