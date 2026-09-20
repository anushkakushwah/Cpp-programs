// Printing concentric square pattern
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout << "Enter n:";
    cin >> n;

    int x = 2*n-1;

    for(i=1; i<=x; i++){

        for(j=1; j<=x; j++){

            // CORRECTED
            int min = i;
            if(j < min)
                min = j;
            if(x-i+1 < min)
                min = x-i+1;
            if(x-j+1 < min)
                min = x-j+1;

            // CORRECTED
            cout << n-min+1 << " ";
        }

        cout << "\n";

    }

    return 0;
}