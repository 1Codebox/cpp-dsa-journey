//print numbers in a square pattern (n × n)

#include <iostream>
using namespace std;

int main() {
    int n = 12;
    int num = 1;
    cout << "enter number: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
            
        for (int j = 1; j <= n; j++) {
            cout << num << " ";
            num = num + 1;
        }
        
        cout << endl;
    }
    
    return 0;
}
