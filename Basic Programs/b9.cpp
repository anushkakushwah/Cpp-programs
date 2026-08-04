//to convert temperature celcius into fahrenheit.
#include <iostream>
using namespace std;
int main() {
    float tempc, tempf;
    cout << "Enter temperature in Celsius: ";
    cin >> tempc;
    tempf = (1.8 * tempc) + 32;
    cout << "Temperature in Fahrenheit: " << tempf;
    return 0;
}
