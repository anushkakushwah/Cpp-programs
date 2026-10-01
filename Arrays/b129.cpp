// to find smallest element in the array
#include<iostream>
#include <climits>
using namespace std;
int main(){
    // creating new array first
    int sz;
    cout << "Enter size:";
    cin >> sz;
    int arr[sz];
    for(int i =0; i<sz;  i++){
        cin >> arr[i];
    }
    // printing original array first
    for(int i =0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    // for finding second smallest number
    int smallest = arr[0];
    int secondSmallest = INT_MAX;
    for(int i = 0; i <sz; i++){
        if(arr[i]<smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i]<secondSmallest && arr[i]!= smallest){
            secondSmallest = arr[i];
        }
    }
    cout << "Smallest element in the array:" << smallest << endl;
    cout << "Second smallest element in the array:" << secondSmallest << endl;
}