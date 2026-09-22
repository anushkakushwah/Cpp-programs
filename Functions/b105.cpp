// To create a function to find nCr binomial coffiecient for n & r
//nCr = n!/ r! (n-r)!
#include<iostream>
using namespace std;
int fact(int num){
    int fact =1, i,j;
    for(i=1;i<=num; i++){
        fact *=i;
    }
    return fact;
}
int Calcoff(int n, int r){
    int f1 = fact(n);
    int f2 = fact(r);
    int f3 = fact(n-r);
    return f1/(f2*f3);
}
int main(){
   cout << Calcoff(8,2);
}