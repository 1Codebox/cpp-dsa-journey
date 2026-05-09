//print max array value with index number
#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 1, 25, -20, 30};
    int size = 5;

    int largest = nums[0];
    int index = 0;

    for (int i = 0; i < size; i++) {

        if (nums[i] > largest) {
            largest = nums[i];
            index = i;
        }

    }

    cout << "Largest Value is " << largest << endl;
    cout << "Index of Largest Value is " << index << endl;

    return 0;
}
