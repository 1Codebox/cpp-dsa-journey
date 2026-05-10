//function to print intersection of arrays

#include<iostream>
using namespace std;

void uniqueNum(int arr[], int sz, int arr2[]) {

    for (int i = 0; i < sz; i++) {

        for (int j = 0; j < sz; j++) {

            if (arr[i] == arr2[j]) {
                cout << "Common Number is: " << arr[i] << endl;
                break; // stop after first match
            }
        }
    }
}

int main() {

    int sz = 4;
    int arr[]  = {1, 2, 3, 4};
    int arr2[] = {1, 2, 2, 2};

    uniqueNum(arr, sz, arr2);
}
