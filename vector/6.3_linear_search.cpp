
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    int count = 0;
    for (int val : vec) { 
        if (val == 30) {
            cout << "Value Found: " << val << endl;
            break;
        } else {
            cout << "Not Found" << endl;
        }
        count = count + 1; 
    }
    cout << "At index = " << count << endl;
}
