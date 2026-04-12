//This program takes two numbers as input and prints their sum

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    sum = a + b;      // Calculating sum
    
    cout << "Sum of numbers are: " << sum;

    return 0;
}
