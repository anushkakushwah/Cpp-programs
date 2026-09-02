// Write a program to convert seconds into hours, minutes and seconds. 
#include<iostream>
using namespace std;
int main(){
    int seconds,hours, minutes;
    cout << "Enter seconds:" << endl;
    cin >> seconds;
    hours = seconds/3600;
    seconds = seconds%3600;
    minutes = seconds/60;
    seconds = seconds%60;
    cout << "Hours:" << hours << " ";
    cout << "Minutes:" << minutes << " ";
    cout << "Seconds:" << seconds<<" ";

    return 0;
}