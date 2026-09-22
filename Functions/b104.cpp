// To create a function to find sum of digits
#include<iostream>
using namespace std;
int SumDigit(int x){
    int sum = 0, temp;
    while(x>0){
        temp = x%10;
        sum+=temp;
        x = x/10;
    }
    return sum;
}
int main(){
    cout << "Sum of digits = "<< SumDigit(145);
    return 0;
}