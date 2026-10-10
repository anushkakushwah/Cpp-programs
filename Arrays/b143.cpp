// multiplication of two matrix
#include<iostream>
using namespace std;
int main(){
    int row1;
    int col1;
    cout << "Enter rows and columns for array 1:" ;
    cin >> row1>> col1;
    int arr1[row1][col1];
    for(int i =0; i<row1; i++){
        for(int j =0; j<col1; j++){
            cout << "Enter element for array:";
            cin >> arr1[i][j];
        }
    }
    //printing first array
    cout << "Your first array is:"<< endl;
    for(int i =0; i<row1; i++){
        for(int j =0; j<col1; j++){
            cout << arr1[i][j];
        }
        cout << endl;
    }
    
    int row2;
    int col2;
    cout << "Enter rows and columns for array 2:";
    cin >> row2>> col2;
    int arr2[row2][col2];
    for(int i =0; i<row2; i++){
        for(int j =0; j<col2; j++){
            cout << "Enter element for array:";
            cin >> arr2[i][j];
        }
    }
    //printing second array
    cout << "Your second array is:"<< endl;
    for(int i =0; i<row2; i++){
        for(int j =0; j<col2; j++){
            cout << arr2[i][j];
        }
        cout << endl;
    }

    // for multiplication 

    if(col1==row2){
        int arr3[row1][col2];
        for(int i = 0; i<row1; i++){
            for(int j = 0; j<col2; j++){
                arr3[i][j] = 0;
                for(int k = 0; k < col1; k++){
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            }
        }
        cout << "Multiplication of matrices is:" << endl;

for(int i = 0; i < row1; i++){
    for(int j = 0; j < col2; j++){
        cout << arr3[i][j] << " ";
    }
    cout << endl;
}

    }else{
    cout << "Matrix multiplication is not possible.";
}
    }

