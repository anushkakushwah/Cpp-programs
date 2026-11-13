// for writing the data in file
#include<iostream>
#include<fstream> // this is for file handling
using namespace std;
int main(){
    // to open the file
    ofstream file;
    // to write in file
    file << "Name is Anushka" << endl;
    file << "College is SAIT" << endl;
    file << "Branch is CSE" << endl;
    file.close();
    cout << "Data is written successfully !!!";
    return 0;
}