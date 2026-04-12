//This program can help to find the factorial of n number.

#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;   // start from 1

    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;   // multiply and store
    }

    cout << fact;

    return 0;
}
