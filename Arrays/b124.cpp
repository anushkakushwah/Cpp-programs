//Merge two arrays
#include<iostream>
using namespace std;
int main(){
    // first array
    int sz1;
    cout << "Enter size of array:";
    cin >> sz1;
    int arr1[sz1];
    for(int i= 0; i<sz1; i++){
        cout << "Enter element:";
        cin >> arr1[i];
    }
    cout << "Original Array:";
    for(int i =0; i<sz1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    // creating second array
    int sz2;
    cout << "Enter size of array:";
    cin >> sz2;
    int arr2[sz2];
    for(int i= 0; i<sz2; i++){
        cout << "Enter element:";
        cin >> arr2[i];
    }
    cout << "Original Array:";
    for(int i =0; i<sz2; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    // creating third array for merging the array
    int sz3;
    sz3 = sz1+sz2;
    int arr3[sz3];
    for(int i =0; i<sz3; i++){
        if(i<sz1){
            arr3[i] = arr1[i];
        }else{
            arr3[i]= arr2[i-sz1];
        }
    }
    // printing final merged array
    cout << "Merged Array:";
    for(int i =0; i<sz3; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}