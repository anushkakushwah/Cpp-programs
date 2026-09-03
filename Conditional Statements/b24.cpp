//To identify the type of triangle isoceles, scalene or triangle
// if two sides are same then isoceles, if three are equal then equilateral, if no sides equal scalene triangle
#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout << "Enter three sides of the triangle:"<< endl;
    cin >> a1>>a2>>a3;
    if((a1!=a2) && (a2!=a3) && (a3!=a1)){
        cout << "Triangle is scalene" << endl;
    }else if ((a1==a2) || (a2==a3) || (a3==a1)){
        cout << "Triangle is isosceles "<< endl;
    }else{
        cout << "Equilateral Triangle" << endl;
    }
    return 0;
}