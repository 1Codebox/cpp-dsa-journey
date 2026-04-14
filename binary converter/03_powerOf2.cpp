//find if a number is power of 2

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) {      //removes the last (rightmost) 1 bit        8-7 in binary 
        cout << "Power of 2";
    } else {
        cout << "Not a power of 2";
    }

    return 0;
}
