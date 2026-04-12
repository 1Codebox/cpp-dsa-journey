//find sum of odd numbers

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    int sum = 0;
    
    cout << "Enter number: ";
    cin >> n;

    while (i <= n) {
        if (i % 2 != 0) {   // check odd number
            sum = sum + i;
        }
        i++;
    }

    cout << "Sum of odd numbers = " << sum;
    return 0;
}
