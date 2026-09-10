// To count the frequency of 0-9 in an integer using arithmetic; // 57888
// We can find these easily by using arrays or strings, but it is loop questions
#include<iostream>
using namespace std;
int main(){
    int n, freq, temp, count=0, temp2;
    int count0 = 0, count1 = 0, count2=0, count3=0, count4 =0 , count5 = 0, count6=0, count7=0, count8=0, count9 = 0;
    cout << "Enter a digit to check:" ;
    cin >> n;

    while (n>0){
        temp = n%10;
        if(temp == 0){
            count0 ++;
        }else if(temp == 1){
            count1 ++;
        }else if(temp == 2){
            count2 ++;
        }else if(temp == 3){
            count3 ++;
        }else if(temp == 4){
            count4 ++;
        }else if(temp == 5){
            count5 ++;
        }else if(temp == 6){
            count6 ++;
        }else if(temp == 7){
            count7 ++;
        }else if(temp == 8){
            count8 ++;
        }else if(temp == 9){
            count9 ++;
        }

        n = n/10;
    }
    cout << "Count of 0:" << count0 << endl;
    cout << "Count of 1:" << count1 << endl;
    cout << "Count of 2:" << count2 << endl;
    cout << "Count of 3:" << count3 << endl;
    cout << "Count of 4:" << count4 << endl;
    cout << "Count of 5:" << count5 << endl;
    cout << "Count of 6:" << count6 << endl;
    cout << "Count of 7:" << count7 << endl;
    cout << "Count of 8:" << count8 << endl;
    cout << "Count of 9:" << count9 << endl;

    return 0;
}