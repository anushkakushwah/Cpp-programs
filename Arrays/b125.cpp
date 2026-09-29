// to count positive and negative element in the array
#include<iostream>
using namespace std;
int main(){
    //ARRAY
    int sz1;
    cout << "Enter size of array:";
    cin >> sz1;
    int arr1[sz1];
    for(int i= 0; i<sz1; i++){
        cout << "Enter element:";
        cin >> arr1[i];
    }
    cout << "Your created array:";
    for(int i =0; i<sz1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    int countpos = 0, countneg = 0;
    for(int i=0; i<sz1; i++){
        if(arr1[i]>0){
            countpos ++;
        }else{
            countneg ++;
        }
    }
    cout << "No of positive element:" << countpos << endl;
    cout << "No of negative element:" << countneg  << endl;


    return 0;
}