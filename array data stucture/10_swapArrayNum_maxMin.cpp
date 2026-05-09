
#include <iostream>
using namespace std;

void calSum(int arr[], int sz ) {

    int smallest = __INT_MAX__;          //declare int with infinity number 
    int smallindex = 0;

    for (int i = 0; i < sz; i++) {

        if (arr[i] < smallest) {           //compare and store min value
            smallest = arr[i];
            //smallest = min(nums[i], smallest);        alter simple of above logic 
            smallindex = i;
        }
    }
    cout << "Smallest Value is " << smallest << endl;
    cout << "Index number of smallest number " <<smallindex << endl;

    cout << "\n";

    int largest = arr[0];     
    int largeindex = 0;
    for (int i = 0; i < sz; i++) {

        if (arr[i] > largest) {           //compare and store max value
            //largest = arr[i];
            largest = max(arr[i], largest);        //alter simple of above logic 
            largeindex = i;
        }
    }
    cout << "largest Value is " << largest << endl;
    cout << "Index number of largest number " <<largeindex << endl;

    swap(arr[smallindex], arr[largeindex]);          //swap min value with max

    // Print updated array
    for (int i = 0; i < sz; i++) {                  //loop to print new array structure 
        cout << arr[i] << " ";
}
}

int main() {

    int arr[] = {3, 2, 5, 4, 1, 6, 9, 7};
    int sz = 8;

    calSum(arr, sz);
    
    return 0;
}
