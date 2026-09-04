//printing 3 numbers in the ascending orders with conditonal
#include<iostream>
using namespace std;

int main(){
    int a,b,c,greatest,smallest,middle;

    cout << "Enter a,b,c:" << endl;
    cin >> a >> b >> c;

    // Greatest
    greatest = a;

    if(b >= a){
        if(b >= c){
            greatest = b;
        }else{
            greatest = c;
        }
    }else{
        if(c >= a){
            greatest = c;
        }else{
            greatest = a;
        }
    }

    // Smallest
    smallest = a;

    if(b <= a){
        if(b <= c){
            smallest = b;
        }else{
            smallest = c;
        }
    }else{
        if(c <= a){
            smallest = c;
        }else{
            smallest = a;
        }
    }

    // Middle
    if((a >= b && a <= c) || (a <= b && a >= c)){
        middle = a;
    }
    else if((b >= a && b <= c) || (b <= a && b >= c)){
        middle = b;
    }
    else{
        middle = c;
    }

    cout << "Ascending order is: "
         << smallest << " " << middle << " " << greatest;

    return 0;
}