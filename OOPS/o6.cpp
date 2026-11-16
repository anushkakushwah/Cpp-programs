//Create a Rectangle class with length and breadth. Calculate area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
    public:
    float length;
    float breadth;

    float calArea(){
        cout << "Area is : " << (length*breadth) << endl;
        
    }
    void calPar(){
        cout <<"Perimeter is : " <<  2*(length+breadth)<< endl;
    }

};
int main(){
    Rectangle r1;
    r1.length = 15.61;
    r1.breadth = 78.98;
    r1.calArea();
    r1.calPar();
}