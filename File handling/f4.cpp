// To count the no of words in a file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int count =0;
    // opening of file
    fstream file;
    file.open("abc.txt");
    // reading a file
    string s;
    while(file>> s){
            count ++;
    }
    cout << "No of words in file:" << count;
    file.close();
}