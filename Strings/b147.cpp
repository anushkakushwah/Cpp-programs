// to remove all occurences of string from the main string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s, subs;
    cout << "Enter any string of your choice:";
    getline(cin, s);
    cout << "Enter the part of string you want to remove:";
    getline(cin, subs);
    while(s.length()>0 && (s.length() > s.find(subs))){
        s.erase(s.find(subs),subs.length());
    }
    cout << "Your remaining string is:" << s;
}