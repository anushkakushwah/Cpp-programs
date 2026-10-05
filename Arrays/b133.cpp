// Sorting of array using bubble sort
#include<iostream>
#include<algorithm>
using namespace std;
void SelectionSort(int arr[], int sz){
    // [4 1 5 3 2];
    for(int i = 0; i<sz-1; i++){
        int smallestIdx = i;
        for(int j=i+1; j<sz; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
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
    SelectionSort(arr, sz);
    for(int i = 0; i < sz; i++){          // print sorted array
        cout << arr[i] << " ";
    }
}