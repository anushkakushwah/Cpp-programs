//to check whether three angles of triangle will form a perfect triangle or not
#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3, sumT, validT;
    cout << "Enter 3 angles of triangle:"<< endl;
    cin >> a1 >> a2>> a3;
    validT = 180;
    sumT = a1+a2+a3;
    if (sumT==validT){
        cout << "Valid triangle can be formed"<< endl;
    }else{
        cout << "Valid triangle couldn't be formed"<< endl;
    }
    return 0;
}