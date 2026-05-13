
#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& vec){

    int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        swap(vec[start], vec[end]);

        start++;
        end--;
    }
}


int main() {
    vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Original Vector: ";

    for (int val : vec) {
        cout << val << " ";
    }  

    reverseVector(vec);
    cout << "\nReversed Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }

    return 0;


}
