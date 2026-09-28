// LINEAR SEARCH ALGORITHM IN ARRAY
#include<iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {5, 7 ,8, 87, 43};
    int sz = 5;
    int target = 87;
    cout << linearSearch(arr, sz, target);
}