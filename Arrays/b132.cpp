// Sorting of array using bubble sort
#include<iostream>
#include<algorithm>
using namespace std;
void BubbleSort(int arr[], int sz){
    // [4 1 5 3 2];
    for(int i = 1; i<sz-1; i++){
        for(int j=0; j<sz-i-1; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
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
    BubbleSort(arr, sz);
    for(int i = 0; i < sz; i++){          // print sorted array
        cout << arr[i] << " ";
    }
}