//to calculate profit and loss percentage
#include <iostream>
using namespace std;
int main(){
    float costp, sellp, p, l, profit, loss;
    cout << "Enter cost price:" << endl;
    cin >> costp;
    cout << "Enter selling price:" << endl;
    cin >> sellp;
    if (sellp>costp){
        cout << "You made a profit." << endl;
        profit = sellp - costp;
        p = (profit/costp)*100;
        cout << "Profit Percentage is:" << p;
    }else{
        cout << "You made a loss." << endl;
        loss = costp- sellp;
        l = (loss/costp)*100;
        cout << "Loss percentage is:" << l;
    }














    return 0;
}