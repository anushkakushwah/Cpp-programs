//Given (x,y), classify origin/axes/quadrant and print its reflection across the x-axis
#include<iostream>
using namespace std;
int  main(){
    int x,y;
    cout << "Enter x and y coordinate:"<< endl;
    cin >>x>>y;
    if(x!=0 && y==0){
        cout << "X axis:" << endl;
    }else if(x==0 && y!=0){
        cout << "Y axis" << endl;
    }else if(x==0 && y==0){
        cout << "Origin" <<endl;
    }else{
        if (x>0 && y>0){
        cout << "First Quadrant"<< endl;
        }else if (x<0 &  y>0){
        cout << "Second Quadrant" << endl;
        }else if(x<0 && y<0){
        cout << "Third Quadrant" << endl;
        }else{
        cout << "Fourth Quadrant" << endl;
        }
    }
   
    return 0;
}
