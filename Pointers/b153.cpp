// using pointers changing the value of variable
#include<iostream>
using namespace std;
int changeVar(int* ptr){
    *ptr = 20;
}
int main(){
    int a = 10;
    changeVar(&a);
    cout << "Value of a after change:" << a;
}