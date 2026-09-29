// to copy one array to another
#include<iostream>
using namespace std;
int main(){
    int sz;
    cout << "Enter size of array:";
    cin >> sz;
    int arr1[sz];
    for(int i= 0; i<sz; i++){
        cout << "Enter element:";
        cin >> arr1[i];
    }
    cout << "Original Array:";
    for(int i =0; i<sz; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    // now for copying array1 elements into the array2
    int arr2[sz];
    for(int i= 0; i<sz; i++){
        arr2[i]= arr1[i];
    }
    // printing array2 copied element
    cout << "Copied array element is:";
    for(int i =0; i<sz; i++){
        cout << arr2[i] << " ";
    }
}