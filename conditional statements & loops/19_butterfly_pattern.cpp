//this program prints a butterfly pattern 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin>> n;
    
    //top 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        if (i >= 0) {
            //spaces
            for (int j = 1; j <= 2 * (n - i - 1); j++) {
                cout << " ";
            }

            //print stars
            for (int j = 1; j <= i + 1; j++) {
                cout << "*";
            }
        }
        
        
        cout << endl;
    }

    //bottom
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "*";
        }

        //spaces
        for (int j = 1; j <= i + i; j++) {
            cout << " ";
        }

        //print stars
        for (int j = i; j <= n-1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    
}
