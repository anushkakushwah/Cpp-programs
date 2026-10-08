//Row having the maximum sum
#include<iostream>
#include<climits>
using namespace std;
int getRowsum(int arr[][3], int rows, int cols){
    // for sum
    int sum = INT_MIN;
    for(int i =0; i<rows; i++){
        int sumI = 0;
        for(int j = 0; j<cols; j++){
            sumI += arr[i][j];   
        }
    sum = max(sum, sumI);
}
    return sum;
}
int main(){
    int arr[3][3] = {{1,2,3}, {2,5,8},{9,8,7}};
    int rows = 3;
    int cols = 3;
    cout << getRowsum(arr, rows, cols);
    return 0;
}