// to find the minimum element in the array
#include<iostream>
using namespace std;
int MinValue(int arr[][3], int rows, int cols){
    int smallest = arr[0][0];
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(arr[i][j]<smallest){
                smallest = arr[i][j];
            }  
        }
}
    return smallest;
}
int main(){
    int arr[3][3] = {{1,2,3}, {2,5,8},{9,8,7}};
    int rows = 3;
    int cols = 3;
    cout << MinValue(arr, rows, cols);
    return 0;
}