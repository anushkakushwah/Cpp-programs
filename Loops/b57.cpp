// to find first and second largest digit of a number.
// main logic that will always be used to find largest and second largest that is : take one value as greater and then compare all other
#include<iostream>
using namespace std;
int main(){
    int n, digit, largest = -1, second = -1;
    cout << "Enter a number:" ;
    cin >> n;
    while(n>0){
        digit = n%10;
        n = n/10;
        if (digit>largest){
            largest = digit;
        }else if(digit > second){
            second = digit;
        } 
    }
    cout << "Largest Digit is:" << largest << endl;
    cout << "Second largest digit is:" << second<< endl;
     




    return 0;
}