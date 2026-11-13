// for reading the data in existing file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream file;
    file.open("abc.txt");
    string s;
    while(getline(file,s)){
        cout <<  s << endl;
    }
    file.close();
}