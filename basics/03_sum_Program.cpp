//This program takes two numbers as input and prints their sum

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;    // Taking input from user

    sum = a + b;      // Calculating sum
    
    cout << "Sum of numbers are: " << sum;

    return 0;
}
