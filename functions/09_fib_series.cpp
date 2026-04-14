#include <iostream>
using namespace std;

void fib(int n) {
    int a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci series: ";
    fib(n);

    return 0;
}


//dry run

// Step-by-step working (n = 5)
// Start:
// a = 0
// b = 1

// Loop runs 5 times
// Iteration 1:
// print a → 0
// next = 0 + 1 = 1

// update:

// a = 1
// b = 1
// ✅ Iteration 2:
// print a → 1
// next = 1 + 1 = 2

// update:

// a = 1
// b = 2

// Iteration 3:
// print a → 1
// next = 1 + 2 = 3

// update:

// a = 2
// b = 3

// Iteration 4:
// print a → 2
// next = 2 + 3 = 5

// update:

// a = 3
// b = 5

// Iteration 5:
// print a → 3

// Final Output:
// 0 1 1 2 3
