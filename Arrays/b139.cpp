// to find the maximum element in the array

#include<iostream>
#include<climits>
using namespace std;
int MaxValue(int arr[][3], int rows, int cols){
    int largest = arr[0][0];
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(arr[i][j]> largest){
                largest = arr[i][j];
            }  
        }
}
    return largest;
}
int main(){
    int arr[3][3] = {{1,2,3}, {2,5,8},{9,8,7}};
    int rows = 3;
    int cols = 3;
    cout << MaxValue(arr, rows, cols);
    return 0;
}