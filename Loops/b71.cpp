//to print multiplication table 2 to 20
#include <iostream>
using namespace std;
int main() {
    int table, i, j;

    for(i = 2; i <= 20; i++) {
        for(j = 1; j <= 10; j++) {
            table = i * j;
            cout << table << "\t";
        }
        cout << endl;
    }

    return 0;
}