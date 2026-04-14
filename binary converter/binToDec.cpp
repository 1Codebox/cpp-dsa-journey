//binary to decimal converter

#include <iostream>
using namespace std;

int binToDec(int binNum) {
    int ans = 0, pow = 1;

    while (binNum > 0) {
        int rem = binNum % 10; 
        ans += (rem * pow);

        binNum /= 10;
        pow *= 2; 
    }

    return ans;
}

int main() {
    int binNum;
    cout << "Binary to Decimal Converter" << endl;
    
    cout << "Enter binary number: ";
    cin >> binNum;
    
    cout << "Decimal = " << binToDec(binNum) << endl;

    return 0;
}
