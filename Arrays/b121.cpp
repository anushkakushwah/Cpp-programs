// SUM AND AVERAGE OF ARRAY ELEMENTS
#include<iostream>
using namespace std;
int sumOfArray(int arr[], int sz){
    int sum = 0;
    for(int i=0; i<sz; i++){
        sum = sum+ arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {2,3,4,5};
    int sz = 4;
    for(int i =0; i<sz; i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
    cout <<"Sum of array elements:" <<sumOfArray(arr,sz)<< endl;
    cout << "Average of elements of array:" << sumOfArray(arr,sz)/sz;
    
}