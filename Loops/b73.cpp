// Printing the first N prime numbers
#include<iostream>
using namespace std;

int main(){
    int n, i = 2, j;                    // CORRECTION: i starts from 2
    cout << "Enter number of prime numbers you want:";
    cin >> n;

    int count = 0;

    while(count < n){                   // CORRECTION: < instead of <=

        bool isPrime = true;            // CORRECTION: reset for every new i

        for(j = 2; j < i; j++){         // CORRECTION: check divisors before i
            if(i % j == 0){
                isPrime = false;        // CORRECTION: found divisor → not prime
                break;                  // CORRECTION: no need to check further
            }
        }

        if(isPrime){                    // CORRECTION: check after for-loop
            cout << i << " ";
            count++;
        }

        i++;                            // CORRECTION: increase i after checking
    }

    return 0;
}