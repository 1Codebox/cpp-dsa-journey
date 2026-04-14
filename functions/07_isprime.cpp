//prime or not using function

#include <iostream>
using namespace std;

    int prime(int n){
        bool isprime = true;
        if (n <= 1) {
            isprime = false;
        }
        for (int i = 2; i < n-1; i++) {
            
            if (n % 2 == 0) {
                isprime = false;
                break;
            }
        }
        
        if (isprime) {
            cout << "number is prime";
        } else {
            cout << "number is not prime";
        }
    }

int main() {
    int n;

    cout << "enter number: ";
    cin >> n;

    prime(n);

    return 0;
}
