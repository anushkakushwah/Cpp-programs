// pyramid number pattern
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<< "Enter n:";
    cin >> n;
    for(i=1; i<=n; i++){
        int k =1;
        for(j=1; j<=n-i; j++){
            cout << " ";
        }
        for(j=1; j<=i; j++){
            cout << k;
            k++;
        }
        if(i>=2){
            for(j=i-1; j>=1; j--){
                cout << j;
            }
        }
        cout<< "\n";
    }






    return 0;
}