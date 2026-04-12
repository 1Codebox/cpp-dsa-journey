//A program that checks if a number is positive or negative

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    
    if (n >= 0) {    
        cout << "Number is positive";        
    }else {
        cout << "Number is Negative";  
    }
    
    return 0;
}
