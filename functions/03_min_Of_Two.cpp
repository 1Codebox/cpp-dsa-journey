//this program prints the min of two number

#include <iostream>
using namespace std;

int minOfTwo(int a, int b) {
    if (a < b) {
        return a;
    } 
    else if (b < a) {
        return b;
    } 
    else {
        return a; // or b, both are same
    }
}

int main() {
    int a, b;

    cout << "Print Minimum of two numbers" << endl;
    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    if (a == b) {
        cout << "Both numbers are equal: " << a;
    } else {
        cout << "Min = " << minOfTwo(a, b);
    }

    return 0;
}
