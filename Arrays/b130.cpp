//bubble sort
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int sz;
    cout << "Enter size of array:";
    cin >> sz;
    int arr[sz];
    for(int i = 0; i<sz; i++){
        cin >> arr[i];
    }
    //printing original array
    cout << "Your Original Array:";
    for(int i = 0; i<sz; i++){
        cout << arr[i] << " ";
    }
    // now using bubble sort
    for(int i= 0; i<sz-1; i++){
        for(int j = 0; j<sz-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << endl;
    cout << "Your sorted array:";
    // printing sorted array
    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
}