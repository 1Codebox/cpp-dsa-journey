//This program takes two numbers as input and prints small/min value.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (a < b) {
        
        cout << "Minimum Value is: " << a;
    }
    else {
        cout << "Minimum Value is: " << b;
    }

    return 0;
}
