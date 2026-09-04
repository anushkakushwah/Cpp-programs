// Commission based on Sales ke liye example slabs:
// Sales ≤ ₹10,000 → Commission = 5%
// ₹10,001 – ₹50,000 → Commission = 10%
// ₹50,001 – ₹1,00,000 → Commission = 15%
// Sales > ₹1,00,000 → Commission = 20%
#include<iostream>
using namespace std;
int main(){
    float sales, commision;
    cout << "Enter amount of sales:" << endl;
    cin >> sales;
    if(sales<=10000){
        cout << "Commision will be 5%" << endl;
        commision = (5/100.00)*sales;
        cout << "Commision will be of amount:" << commision;
    }else if(sales>10001 && sales<=50000){
        cout << "Commision will be 10%" << endl;
        commision = (10/100.00)*sales;
        cout << "Commision will be of amount:" << commision;
    }else if (sales>50001 && sales<=100000){
        cout << "Commision will be 15%" << endl;
        commision = (15/100.00)*sales;
        cout << "Commision will be of amount:" << commision;
    }else{
        cout << "Commision will be 20%" << endl;
        commision = (20/100.00)*sales;
        cout << "Commision will be of amount:" << commision;
    }
    return 0;
}
