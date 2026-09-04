// to find out youngest people among three people
#include<iostream>
using namespace std;
int main(){
    int a,b,c, smallest;
    cout << "Enter age of three persons:" << endl;
    cin >> a>> b>>c;
    smallest = a;
    if(b<a){
        smallest =b;
        cout << "B is younger." << endl;
    }
    if (c<a){
        smallest = c;
        cout << "C is younger." << endl;
    }else{
        cout << "A is younger" << endl;
    }





    return 0;
}