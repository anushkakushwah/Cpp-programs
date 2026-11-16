//Create a Car class with brand, model and speed.
// Add functions to accelerate and display speed.
#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    float speed;

    void accelerate(){
        cout << "Accelerating the car...!!!";
    }
    void showSpeed(){
        cout << "Speed of the car is:" << speed;
    }
};
int main(){
    Car c1,c2;
    c1.brand = "Hyundai";
    c1.model = "verna";
    c1.speed = 101;
    c2.brand = "Honda";
    c2.model = "Amaze";
    c2.speed = 112;
    c1.accelerate();
    c2.showSpeed();
}