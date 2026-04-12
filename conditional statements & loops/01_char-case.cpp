//check Character uppercase or lowercase

#include <iostream>
using namespace std;

int main() {
    char ch;
    //int a = ch;
    cout << "Enter character: ";
    cin >> ch;
    
    if (ch >= 'A' && ch <= 'Z') {    
        cout << "Character is uppercase";        
    }else if (ch >= 'a' && ch <= 'z') {
        cout << "Character is lowercase";  
    }
    else {
        cout << "Not an alphabet character\n";
    }

    return 0;
}
