// to find second largest element in the array
#include<iostream>
using namespace std;
int main(){
    // creation of original array
    int sz;
    cout << "Enter size of array:";
    cin >> sz;
    int arr[sz];
    for(int i =0; i<sz; i++){
        cin >> arr[i];
    }
    // now for checking second largest
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i =0; i<sz; i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]!= largest){
            secondLargest = arr[i];
        }
    }
    cout << "Largest Element of array:" << largest << endl;
    cout << "Second largest element of array:" << secondLargest;
}