//program prints num triangle

#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "enter number: ";
    cin >> n;

    for (int i = 0; i < n; i++) { //outer loop
            
        for (int j = 0; j <= i; j++) { //inner loop
            cout <<i+1;
        }
        
        cout << endl;
    }
    
    return 0;
}
