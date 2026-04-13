//This program prints a reverse triangle pattern (decreasing numbers in each row)

#include <iostream>
using namespace std;

int main() {
    
    int n; 
    cout << "enter number: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        char ch ='A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch <<" ";
            ch--;
        }
        
        cout << endl;
    }
    
    return 0;
}
