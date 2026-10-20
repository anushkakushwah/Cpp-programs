
#include <iostream>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    // Reversing character array
    char str[100];

    cout << "Enter the string to reverse: ";
    cin.getline(str, 100);

    int st = 0, end = strlen(str) - 1;

    while (st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }

    cout << "Your reversed string: " << str << endl;

    // Reversing string directly
    string str2;
    cout << "Enter another string: ";
    getline(cin, str2);

    reverse(str2.begin(), str2.end());

    cout << "Your reversed string: " << str2 << endl;

    return 0;
}
