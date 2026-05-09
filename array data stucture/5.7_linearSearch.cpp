
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}


int main() {
    int arr[] = {2, 8, 6, 9, 15, 20};
    int size = 6;
    int target = 9;

    cout << linearSearch(arr, size, target);
    return 0;
}
