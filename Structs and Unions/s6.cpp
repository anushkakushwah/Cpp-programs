// Structure Assignment
// We can copy one structure variable into another variable of the same structure type.
#include<iostream>
using namespace std;
struct MadhyaPradesh{
    int pin;
    string city;
};
int main(){
    MadhyaPradesh s1= {413456, "Indore"};
    MadhyaPradesh s2;
    s2 = s1;
    cout << s2.city;


}