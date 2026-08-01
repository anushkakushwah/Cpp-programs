#include <iostream>
using namespace std;

int main() {
    int totalDays, years, months, days;

    cout << "Enter total number of days: ";
    cin >> totalDays;

    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    days = totalDays % 30;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Days: " << days << endl;

    return 0;
}