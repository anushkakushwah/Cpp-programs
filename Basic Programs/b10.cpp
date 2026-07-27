// to find the roots of quadratic equations
// also showing user values into the standard quadratic form
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    //quadratic equation standard form : ax^2 + bx +c
    int a,b,c;
    float r1, r2,d;
    cout << "Enter coeffients of a and b, and constant c:" << endl;
    cin >> a>>b>>c;
    cout << "Your given equation is: "  << a << "x^2 + "<< b << "x + " << c << " = 0" << endl;
    d = (b*b)-4*a*c;
    r1= (-b + sqrt(d))/2*a;
    r2 =(-b - sqrt(d))/2*a;
    cout << "First root of equation is:" << r1 << endl;
    cout << "Second root of equation is:" << r2 << endl;
    return 0;
}
