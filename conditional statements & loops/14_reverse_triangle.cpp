//This program prints a reverse number triangle pattern (decreasing numbers in each row)

#include <iostream>
using namespace std;

int main() {
    
    int n; 
    cout << "enter number: ";
    cin >> n;
    
    int num = 1;    
    
    for (int i = 0; i < n; i++) {
         
        for (int j = 0; j <= i; j++) {
            cout <<num-j;
        }

        num++;
        cout << endl;
    }
    
    return 0;
}
