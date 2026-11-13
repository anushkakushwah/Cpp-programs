// appending the data in existing file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("abc.txt", ios::app);
    // we use //ios::app
    file << "\n Lives in indore" << endl;
    file.close();
    cout << "Data Appended Successfully.!!!";
    return 0;
}