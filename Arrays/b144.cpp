// addition of matrix
#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout << "Enter rows and columns for array 1:" ;
    cin >> row>> col;
    int arr1[row][col];
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << "Enter element for array:";
            cin >> arr1[i][j];
        }
    }
    //printing first array
    cout << "Your first array is:"<< endl;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << arr1[i][j];
        }
        cout << endl;
    }
    
    int arr2[row][col];
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << "Enter element for array:";
            cin >> arr2[i][j];
        }
    }
    //printing second array
    cout << "Your second array is:"<< endl;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << arr2[i][j];
        }
        cout << endl;
    }
    
    // for the addition of matrix;
    int arr3[row][col];
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            arr3[i][j] = arr1[i][j]+ arr2[i][j];
        }
        cout << endl;
    }
    // printing of third resultant matrix
    cout << "Your resultant matrix is:" << endl;
    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout << arr3[i][j];
        }
        cout <<  endl;
    }
}


