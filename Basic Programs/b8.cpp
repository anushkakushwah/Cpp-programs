// Write a program to calculate area and circumference of a circle. 
#include <iostream>
using namespace std;
int main (){
    int rad, area, circum;
    cout << "Enter radius of circle:" << endl;
    cin >> rad;
    area = 3.14* (rad*rad);
    circum = 2*3.14 *rad;
    cout << "Area of circle is:" << area<< endl;
    cout << "Circumferenc of circle is:" << circum<< endl;

    return 0;
}