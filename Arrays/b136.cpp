// creation of 2d arrays and traversing 
#include<iostream>
using namespace std;
int main(){
    // taking dimensions for the matrix
    int rows;
    int cols;
    cout << "Enter number of rows:";
    cin >> rows;
    cout << "Enter number of columns:";
    cin >> cols;
    int arr[rows][cols];
    //Taking elements for the array
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout << "Enter value for index " << i << " " << j << ":";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    // PRINTING THE ARRAY
    cout << "YOUR ARRAY:" << endl;
    for(int i =0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    int target;
    cout << "Enter target:";
    cin >> target;
    for(int i = 0; i<rows; i++){
        for(int j =0; j<cols; j++){
            if(arr[i][j]==target){
                cout << "Your element is present at index:" << i << " " << j;
            }
        }
    }

    return 0;
}