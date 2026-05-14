
#include <iostream>
#include <vector>
using namespace std;

int main() {
   int sz = 7; 
   int arr[7] = {3, -4, 5, 4, -1, 7, -8};
   
   int currSum = 0;
   int maxSum = -99999;

   for (int i = 0; i < sz; i++) {
    currSum = currSum + arr[i];
    maxSum = max(currSum, maxSum);
    
    if (currSum < 0) {          //kadane's algorithm
        currSum = 0; 
    }
   }
   cout << "Subarray maxSum is = " << maxSum << endl;
    return 0;
}
