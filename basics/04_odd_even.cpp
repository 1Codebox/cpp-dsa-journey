//This program takes two numbers and print even if "n%2 == 0" else odd

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Two Numbers: ";
    cin >> n;

    if (n % 2 == 0) {
        
        cout << "The Number is Even"; 
    }
    else {
        cout << "The Number the Odd ";
    }

    return 0;
}
