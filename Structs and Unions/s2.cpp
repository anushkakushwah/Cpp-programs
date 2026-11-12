#include<iostream>
using namespace std;
struct stuinfo{
    string name;
    int rollno;
    int marks;
    string id;
};
int main(){
    stuinfo s[3]= {{"Akash", 59, 600, "xa"}, {"Raj", 69, 700, "ab"},{"Arita", 72,800, "uf"}};
    for(int i = 0; i<3; i++){
        cout << s[i].name << " ";
        cout << s[i].rollno << " ";
        cout<< s[i].marks << " ";
        cout << s[i].id << " ";
        cout << endl;
    }
}