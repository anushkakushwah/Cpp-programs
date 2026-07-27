//to find greater of three numbers without using any conditonal or loop statements
//USING MAX FUNCTION
#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int greatest = max(a, max(b, c));
    cout << "Greatest number = " << greatest;
    return 0;
}
