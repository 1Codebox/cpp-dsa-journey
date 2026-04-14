//print number in reverse order

#include <iostream>
using namespace std;
int main() {
    int n;
    int rev = 0;
    cout << "Print number in rverse" << endl;

    cout << "enter number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;     //get last digit
        rev = rev * 10 + digit; //build reverse
        n = n/10;               //remove last digit
    }

    cout << "Reversed number = " << rev;

    return 0;
}
