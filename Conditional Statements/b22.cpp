//Write a program to find maximum among 4 numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout << "Enter any four numbers of your choice:" << endl;
    cin >> a>>b>>c>>d;
    if(a>b && a>c && a>d){
        cout << "a is greater" <<endl;
    }else if (b>a && b>c && b>d){
        cout << "b is greater"<< endl;
    }else if(c>a && c>d && c>b){
        cout << "c is greater"<<endl;
    }else{
        cout << "d is greater" << endl;
    }
    return 0;
}