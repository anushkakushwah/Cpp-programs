// Validate a date and print the number of days remaining in that year, including leap-year February
#include<iostream>
using namespace std;
int main(){
    int day, m, year;
    cout << "Enter date, month and year:" << endl;
    cin >> day >> m >> year;
    if(m==1 || m==3|| m==5 || m==7 || m==8 || m==10 || m==12){
        if(day>=1 && day<=31){
            if(year>=1000 && year<=9999){
                cout << "Date is valid" << endl;
            }else{
                cout << "Not a valid date"<< endl;
            }
        }
    }else if(m==4 || m==6 || m==9 || m==11){
        if(day>=1 && day<=30){
            if(year>=1000 && year<=9999){
                cout << "Date is valid" << endl;
            }else{
                cout << "Not a valid date" << endl;
            }
        }
    }else if(m==2){
        if(day>=1 && day<=28){
            if(year>=1000 && year<=9999){
                cout << "Date is valid" << endl;
            }else{
                cout << "Not a valid date" << endl;
            }
        }
    }else{
        cout << "You have entered something wrong"<< endl;
    }

    return 0;
}