// calculating HCF of two numbers;
#include<iostream>
using namespace std;
int main(){
    int n1,n2, hcf =1 ;
    cout <<"Enter two numbers to calculate hcf:";
    cin >> n1>> n2;
    if(n1>n2){
        for( int i=1; i<=n1; i++){
            if (n1%i == 0 && n2%i ==0){
                if(i>hcf){
                    hcf = i;
                }
            }
        }
        cout << "HCF is:" << hcf;
    }else if(n2>n1){
        for( int i=1; i<=n2; i++){
            if (n1%i == 0 && n2%i ==0){
                if(i>hcf){
                    hcf = i;
                    
                }
            }
        }
        cout << "HCF is:" << hcf;
    }

    return 0;
}