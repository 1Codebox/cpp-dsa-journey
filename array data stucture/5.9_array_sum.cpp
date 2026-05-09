//calculate sum of all numbers in an array

#include <iostream>
using namespace std;

void calSum(int arr[], int sz ) {
    
    int sum = 0;
    
    for (int i = 0; i < sz; i++) {
        sum = sum + arr[i]; 
    }

    cout << "Sum = " << sum << endl;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sz = 8;

    calSum(arr, sz);

    return 0;
}
