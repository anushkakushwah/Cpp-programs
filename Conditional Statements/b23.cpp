//write a program to check whether a triangle is valid or not
// now a triangle validation can be checked on the basis of 2 methods:
// sum of angles inside triangle make 180 & sum of two sides will always be greater than one side.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter sides of tri:" <<endl;
    cin >> a >>b>>c;
    float a1,a2,a3;
    cout << "Enter angles"<< endl;
    cin >> a1 >> a2>>a3;
    if((a+b>c)|| (b+c>a) || (c+a>b)){
        if(a1+a2+a3==180){
            cout << "Triangle is valid"<< endl;
        }else{
            cout << "Triangle is not valid"<< endl;
        }
    }


    return 0;
}