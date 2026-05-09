// this program first take user input for array size then use for loop for input/output 

#include <iostream>
using namespace std;

int main() {
    int i;
    
    cout << "Enter Size of Array: ";
    cin >> i;

    int marks[i];

    // Input values
    for (int j = 0; j < i; j++) {
        cin >> marks[j];
    }

    // Print values
    for (int j = 0; j < i; j++){
        cout << marks[j] << endl;
    }
     
    return 0;
}
