// reversing of arrray using 2 pointers
#include<iostream>
using namespace std;
int reverseArray(int arr[], int sz){
    int start =0, end = sz-1;
    while(start<end){
        swap(arr[start], arr[end]); // this can also be done using third variable swapping.
        start ++;
        end --;
    }
}
int main(){
    int arr[]={5,6,7,8,9,10,11,12};
    int sz = 8;
    reverseArray(arr, sz);
    for(int i=0; i<sz; i++){
        cout << arr[i]<< " ";
    }
}