// to find out second largest number out of three
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter any three number of your choice:" <<endl;
    cin>>a>>b>>c;
    if(a>b && a<c){
        cout << "A is second greater"<<endl;
    }else if(b>a && b<c){
        cout << "B is second greater"<< endl;
    }else{
        cout << "C is second greater"<< endl;
    }
    return 0;
}