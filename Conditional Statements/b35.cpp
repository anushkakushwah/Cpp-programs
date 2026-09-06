//Build a 4-slab electricity-bill calculator with a fixed surcharge that applies only after a threshold
// 0–100 units → ₹2/unit
// 101–200 units → ₹3/unit
// 201–300 units → ₹5/unit
// 300+ units → ₹7/unit
#include<iostream>
using namespace std;

int main (){
    int units, ebill, surcharge;
    cout << "Enter units consumed this month:" << endl;
    cin >> units;
    if (units>=0 && units <= 100){
        ebill = 2*units;
        cout << "Electricity Bill(in rupees):"<< ebill << " Rupees";
    }else if(units>=101 && units <=200){
        ebill = 3*units;
        cout << "Electricity Bill(in rupees):" << ebill << " Rupees";
    }else if(units>=201 && units <= 300){
        ebill = 5*units;
        cout << "Electricity Bill(in ruppes):"<< ebill<< " Rupees";
    }else{
        cout << "You will be charged surcharge fees of 150 rupees !!!" << endl;
        ebill = (7*units)+ 150;
        cout << "Electricity Bill (in rupees):" << ebill << " Rupees";
    }

    return 0;
}