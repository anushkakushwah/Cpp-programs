// swapping the values of two pointers using pointers
#include<iostream>
using namespace std;
int swapVal(int*ptr1, int* ptr2, int*ptr3){
    *ptr3 =  *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
}
int main(){
    int c;
    int a = 10;
    int b = 30;
    swapVal (&a, &b,&c);
    cout << "Value of a  after swapping:" << a << endl;
    cout << "Value of b after swapping:" << b << endl;
}