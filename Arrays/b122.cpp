//Seperate even and odd elements of array and creating other two
#include<iostream>
using namespace std;
int main(){
    //taking input of array from the user
    int sz;
    cin >> sz;
    int arr[sz];
    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }
    cout << "Main array:";
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // for seperating out even and odd numbers
    int evenArr[sz], oddArr[sz], e = 0, o = 0;
    for(int i=0; i<sz; i++){
        if(arr[i]%2==0){
            evenArr[e] = arr[i];
            e++;
        }else{
            oddArr[o] = arr[i];
            o++;
        }
    }
    // printing array of even elements
    cout << "Even elements array:";
    for(int i = 0; i < e; i++){
        cout << evenArr[i] << " ";
    }
    cout << endl;
    
    // printing array of odd elements
    cout << "Odd elements array:";
    for(int i = 0; i < o; i++){
    cout << oddArr[i] << " ";
    }
}
