// using pointers in array find sum of elemetns in array
#include<iostream>
using namespace std;
int main(){
    int sum =0;
    int arr[5] = {5,6,7,8,9};
    for(int i =0; i<5; i++){
        sum = sum +*(arr+i);
    }
    cout<< "Sum of element is:" << sum;
}