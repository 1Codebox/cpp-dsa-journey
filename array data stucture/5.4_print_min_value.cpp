
#include <iostream>
using namespace std;

int main() {
    int nums[] = {10, 1, 25, -24, 30};
    int size = 5;

    int smallest = __INT_MAX__;          //declare int with infinity number 
    for (int i = 0; i < size; i++) {

        if (nums[i] < smallest) {           //compare and store min value
            smallest = nums[i];
            //smallest = min(nums[i], smallest);        alter simple of above logic 
        }
        
    }
    
    cout << "Smallest Value is " << smallest;
    return 0;
}
