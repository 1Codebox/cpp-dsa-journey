
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int sz) {

    int smallIndex = 0;
    int largeIndex = 0;

    // Find smallest and largest indexes
    for (int i = 0; i < sz; i++) {

        if (arr[i] < arr[smallIndex]) {
            smallIndex = i;
        }

        if (arr[i] > arr[largeIndex]) {
            largeIndex = i;
        }
    }

    // Swap values in array
    swap(arr[smallIndex], arr[largeIndex]);

    // Print updated array
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {3, 2, 1, 4, 5, 6, 8, 7};
    int sz = 8;

    swapMinMax(arr, sz);

    return 0;
}
