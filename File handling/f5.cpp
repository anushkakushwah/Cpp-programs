// to copy the content of one file into another
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // opening of first file
    fstream file1,file2;
    file1.open("abc.txt");
    file2.open("cba.txt", ios::out);
    string s;
    while(getline(file1,s)){
        file2 << s;
    }
    file1.close();
    file2.close();
}
