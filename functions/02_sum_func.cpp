#include <iostream>
using namespace std;

int sum(int a, int b) {
    int s = a + b;
    return s;
}
int main() {
    int a, b;

    cout << "Two Number Sum calculator" << endl;
    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    cout << "sum = " <<sum(a, b);

}
