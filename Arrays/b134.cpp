// Sorting of array using bubble sort
#include<iostream>
#include<algorithm>
using namespace std;
void InsertionSort(int arr[], int sz){
    // [4 1 5 3 2];
    for(int i = 1; i<sz; i++){
        int current = i;
        int prev = i-1;
        while(prev>=0 && arr[prev]>arr[current]){
            arr[prev+1]= arr[prev];
            prev --;
        }
        arr[prev+1]= current;
    }
}
int main(){
    int sz;
    cout << "Enter size of ur array:";
    cin >> sz; 
    int arr[sz];
    for(int i=0; i<sz; i++){
        cin >> arr[i];
    }
    InsertionSort(arr, sz);
    for(int i = 0; i < sz; i++){          // print sorted array
        cout << arr[i] << " ";
    }
}