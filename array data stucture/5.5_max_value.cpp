

#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 1, 25, -20, 30};
    int size = 5;

    int largest = -500;
    for (int i = 0; i < size; i++) {

        if (nums[i] > largest) {           //compare and store min value
            //largest = nums[i];
            largest = max(nums[i], largest);
        }
        
    }
    
    cout << "Largest Value is " << largest;
    return 0;
}
