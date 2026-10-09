// transpose of the matrix
#include<iostream>
#include<algorithm>
using namespace std;
void transposeOfarr(int arr[][3], int rows, int cols){
    for(int i = 0; i<rows; i++){
        for(int j =i+1; j<cols; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3] = {{1,2,3}, {2,3,4}, {5,6,7}};
    int rows =3;
    int cols = 3;
    cout << "Your original array is:" << endl;
    for(int i =0; i<rows; i++){
        for(int j =0; j<cols; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "Your transposed array is here:"<< endl; 
    transposeOfarr(arr, rows, cols);
}