// to count digits in a nnumber
#include<iostream>
using namespace std;
int main(){
    int n, count = 0,  temp;
    cout << "Enter n:" << endl;
    cin >> n;
    while(n){
        temp = n%10;
        count ++;
        n=n/10;
    }
    cout << "No of digits are:" << count << endl;
    return 0;
}