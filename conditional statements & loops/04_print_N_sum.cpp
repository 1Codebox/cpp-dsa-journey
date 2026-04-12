//This program calculate sum of all numbers from 1 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "enter number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum;
    return 0;
}
