// To calculate grade using marks
#include<iostream>
using namespace std;
int main (){
    int s1,s2,s3,s4,s5, total;
    float percentage;
    cout<< "Enter marks of all 5 subject" << endl;
    cin >> s1>>s2>>s3>>s4>>s5;
    total = s1+s2+s3+s4+s5;
    percentage = (total/500.00)*100;
    if(percentage>90 && percentage<=100){
        cout << "Grade A" << endl;
    }else if(percentage>80 && percentage<=90){
        cout << "Grade B"<< endl;
    }else if(percentage>70 && percentage<=80){
        cout<< "Grade C"<< endl;
    }else {
        cout << "Grade D and below" << endl;
    }
    return 0;
}