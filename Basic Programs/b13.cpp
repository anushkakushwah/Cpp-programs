
//Write a program to calculate percentage & division of 5 subjects
#include<iostream>
using namespace std;
int main (){
    int sub1, sub2, sub3, sub4, sub5, total, division;
    float percentage;
    cout << "Enter marks of all 5 subjects:" << endl;
    cin >> sub1>> sub2>> sub3>> sub4>> sub5;
    total = sub1+ sub2+ sub3 + sub4 + sub5;
    percentage = (total/ 500.00) *100;
    // for division
    if (percentage> 70 && percentage <=100){
        cout << "First Division." << endl;
    }else if ( percentage > 45 && percentage <=70){
        cout << "Second Division." << endl;
    }else if (percentage >20 && percentage<=45){
        cout << "Third Division." << endl;
    }else{
        cout << "No division achieved." << endl;
    }
    
    return 0;
}