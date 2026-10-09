// to find the sum of both the diagonal elements
#include<iostream>
using namespace std;
int sumOfDiagonal(int arr[][3], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j || j == n-i-1){
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int arr[3][3] = {{1,2,3}, {2,3,4},{4,5,6}};
    int n = 3;
    cout << sumOfDiagonal(arr, n);
    return 0;
}