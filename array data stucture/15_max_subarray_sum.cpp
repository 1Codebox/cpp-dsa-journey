//program helps to find max subarray sum
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {3, 5, 4, -1, 7, -8};   

    int maxSum = -99999;    //INT_MIN

    for (int st = 0; st < n; st++) {    
        int currSum = 0; 
        for (int end = st; end < n; end++) {
                currSum = currSum + arr[end];
                maxSum = max(currSum, maxSum);
        }
    }   
    
    cout << "MaxSum of Subarrays is: " <<maxSum;

    return 0;
}
