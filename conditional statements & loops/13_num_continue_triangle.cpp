//This program prints a number triangle pattern (increasing numbers in each row)

#include <iostream>
using namespace std;

int main() {
    
    int n; 
    cout << "enter number: ";
    cin >> n;
  
    for (int i = 0; i < n; i++) {
        
        int num = 1;      
        for (int j = 0; j <= i; j++) {
            cout <<num;
            num++;
        }
        
        cout << endl;
    }
    
    return 0;
}
