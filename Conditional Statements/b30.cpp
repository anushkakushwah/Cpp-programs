// to calculate income tax
//income <=2,50,000 = tax 0%
// income 2,50,001 - 5,00,000 = tax 5%
// income 5,00,001- 10,00,000 = tax 20%
// income > 10,00,000 = tax 30%
#include<iostream> 
using namespace std;
int main(){
    float sal, income;
    cout << "Enter salary:" << endl;
    cin >> sal;
    if(sal<=250000){
        cout << "Income tax is 0%" << endl;
    }else if(sal>250001 && sal <= 500000){
        cout << "Income tax is 5%" << endl;
        income = (5/100.00)*sal;
        cout << income;
    }else if (sal>500001 && sal <= 1000000){
        cout << "Income tax is 10%" << endl;
        income = (10/100.00)*sal;
        cout << income;
    }else{
        cout << "Income tax is 30%" << endl;
        income = (30/100.00)*sal;
        cout << income;
    }
    return 0;
}

