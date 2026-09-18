// to print hollow pyramid
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter n:";
    cin >> n;
    for(i=1; i<=n; i++){
        for(j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for(j=1; j<=2*i-1; j++){
            if(j==1 || i==n|| j==2*i-1){
                cout << "*";
            }else{
                cout << " ";
            }   
            
        }
        cout << "\n";
    }
    return 0;
}