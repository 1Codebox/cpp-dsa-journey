//print sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digSum = 0;
    while (num > 0) {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }

    return digSum;
        
}

int main() {
    int num;
    
    cout << "enter number: ";
    cin >> num;
    
    cout << "sum = " << sumOfDigits(num) << endl;
    return 0;
}
