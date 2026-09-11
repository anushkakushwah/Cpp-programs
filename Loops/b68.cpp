//Find the largest digit
#include<iostream>
using namespace std;
int main(){
    int n, temp, i,largest = -1;
    cout << "Enter n:";
    cin >> n;
    while(n>0){
        temp = n%10;
        if(temp>largest){
            largest = temp;
        }
        n = n/10;
    }
    cout << "Largest digit is: "<< largest ;  
    return 0;
}