// To search the elements using binary search
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int sz, int target){
    // [4 1 5 4 12]
    int mid, start = 0, end = sz-1;

    while(start<=end){
        mid = start+ (end - start)/2;
        if(target>arr[mid]){
            start = mid + 1;
        }else if(target<arr[mid]){
            end = mid - 1;
        }else if(target == arr[mid]){
            return mid;
        }
    }
    return -1;
}
    int main(){
        int sz, target;
        cout << "Enter size of your array:";
        cin >> sz;
        int arr[sz];
        for(int i =0; i<sz; i++){
            cin >> arr[i];
        }
        cout << "Enter target:";
        cin >> target;
        cout << BinarySearch(arr,sz, target );
    }
