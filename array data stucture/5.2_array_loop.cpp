//this program helps to print array using for loop also check array size
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {50, 12, 52, 32, 40};
    
    cout << "Size of Array = " << sizeof(marks)/4 << endl;
    cout << "\n";
    
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << endl;
    }
    
    return 0;
}
