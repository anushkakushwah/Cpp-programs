//Create a class demonstrating a default constructor.
#include<iostream>
using namespace std;
class Vehicle{
    public:
    string vehicleName;
    string model;
    string price;

    Vehicle(){
        cout << "Welcoming you in the search of vehicles...!!!";
    }
};
int main(){
    Vehicle v1;
    // here constructor will get called automatically.
}