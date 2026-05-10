
#include<iostream>
using namespace std;

int uniqueNum(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        int count = 0;

        for (int j = 0; j < sz; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }  
        }

        if (count == 1) {
            cout << "Unique Number is: " << arr[i] << endl;
        }    
    }
    return 0;
}

int main() {
    int sz = 9;
    int arr[] = {1, 2, 3, 4, 1, 11, 3, 4, 5};
    
    uniqueNum(arr, sz);

}
