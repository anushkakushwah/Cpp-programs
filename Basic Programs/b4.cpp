// tp find out whether the given year is leap or not
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year to check:" << endl;
    cin >> year;

    if (year >= 1000 && year <= 9999) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            cout << "Given year is leap." << endl;
        } else {
            cout << "Given year is not leap." << endl;
        }
    } else {
        cout << "Please enter a valid 4 digit year." << endl;
    }

    return 0;
}