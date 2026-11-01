// traversing array using pointers
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,6,7,8,9};
    for(int i =0; i<5; i++){
        cout << *(arr+i)<< endl;
    }
}