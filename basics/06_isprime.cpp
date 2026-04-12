//This program takes a number as input and checks whether it is a prime number or not.

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter Number: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "Number is Prime";
    } else {
        cout << "Number is Not Prime";
    }

    return 0;
}
