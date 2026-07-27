//Write a program to calculate the electricity bill using the following slab rates:
//First 100 units → ₹1.50 per unit
//Next 100 units (101–200) → ₹2.50 per unit
//Next 100 units (201–300) → ₹4.00 per unit
//Above 300 units → ₹6.00 per unit
//use the above data for the electricity bill calculation
#include<iostream>
using namespace std;
int main(){
    int unit;
    float bill;
    cout<< "Enter units consumed this month:" <<endl;
    cin >> unit;
    if(unit<100 and unit>0){
        bill = unit* (1.50);
    }else if (unit>100 and unit < 200){
        bill = unit * (2.50);
    }else if(unit>200 and unit <300){
        bill = unit * (4.00);
    }else if(unit>300){
        bill = unit *(6.00);
    }else{
        cout << "Enter correct units consumed."<< endl;
    }

    cout << "Bill for the user is of amount is rupees " << bill;










    return 0;
}
