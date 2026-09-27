// find largest elementn in the array

#include<iostream>
using namespace std;
int  main(){
    int size = 5;
    int arr[size];
    for(int i=0 ; i<size; i++){
        cout << "Enter element for array:";
        cin >> arr[i];
    }
    for(int i =0; i<size; i++){
        cout << arr[i];
    }
    // for finding smallest element in the array
    int largest = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << "Largest number is =" << largest;

}