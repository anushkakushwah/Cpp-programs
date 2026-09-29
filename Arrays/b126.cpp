// to find duplicate element in the array
#include<iostream>
using namespace std;
int main(){
    int sz1;
    cout << "Enter size of array:";
    cin >> sz1;
    int arr1[sz1];
    for(int i= 0; i<sz1; i++){
        cout << "Enter element:";
        cin >> arr1[i];
    }
    cout << "Your created array:";
    for(int i =0; i<sz1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    //for finding duplicate elements;
    for(int i =0; i<sz1; i++){
        for(int j =i+1; j<sz1; j++){
            if(arr1[i]== arr1[j]){
                cout << arr1[i] << " ";
            }
        }
    }










    return 0;
}