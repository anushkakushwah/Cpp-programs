//program to display number of days in a month
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter month number (1-12):"<< endl;
    cin >> n;
    switch (n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           cout << "31 days in this month."<< endl;
           break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout<< "30 days in this month."<< endl;
            break;
        case 2:
           cout << "28/29 days in this month."<< endl;
           break;
        default:
           cout << "INVALID MONTH" << endl;
    }
    return 0;
}