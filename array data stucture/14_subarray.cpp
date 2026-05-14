
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "   Subarrays   " << endl;
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            for (int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }    

// dry run for above code

    // for (int out = 0; out < n; out++) {
    //     cout << "outer loop " <<  out << ": ";
        
    //     for (int in = out; in < n; in++) {
    //         cout << "inner loop " <<  in << ": ";
            
    //         for (int i = out; i <= in; i++) {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
