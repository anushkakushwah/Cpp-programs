 //Check whether a number is a Kaprekar number
 #include<iostream>
 using namespace std;
 int main(){
    int n, temp1, sq, count= 0, nw ;
    cout << "Enter n:";
    cin >> n;
    sq = n*n;
    int sq1 = sq;
    int sq2 = sq;
    cout<< sq << endl;
    while(sq>0){
        temp1= sq% 10;
        count ++;
        sq = sq/10;
    }
    cout << "No of diigts:" << count; /// counting the digits..
    // -------------------------------------------------------------------------------------------------

    if(count>=10 && count<=99){
        int sum = 0;
        while(sq1>0){
            nw = sq1%10;
            sum = sum+nw;
            sq1 = sq1/10;
        }
        if(sum==sq2){
            cout << "Kaprekar Number." << endl;
        }else{
            cout << "Not a Kaprekar Number." << endl;
        }
    }else if(count>=100 && count<=999){
        int sum = 0;
        while(sq1>0){
            nw =  sq1%100;
            sum = sum+nw;
            sq1 =  sq1/100;
        }
        if(sum==sq2){
            cout << "Kaprekar Number." << endl;
        }else{
            cout << "Not a Kaprekar Number." << endl;
        }
    }else if(count>=1000 && count<=9999){
        int sum = 0;
        while(nw>0){
            nw =  sq1%1000;
            sum = sum+nw;
            sq1 =  sq1/1000;
        }
        if(sum==sq2){
            cout << "Kaprekar Number." << endl;
        }else{
            cout << "Not a Kaprekar Number." << endl;
        }
    }
    return 0;
 }