//this program using different functions of vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    //function to get vector size
    vector<char> vec = {'a', 's', 'd'};
    cout << "Size = " << vec.size() << endl;       


    //push back function used to add values in vector
cout << "\n";
    vector<int> vec2;
    cout << "Size = " << vec2.size() << endl;
    vec2.push_back(25);                                     
    vec2.push_back(35);                                     
    vec2.push_back(45);                                     
    cout << "After push back size = " << vec2.size() << endl;

    for (int val : vec2) {             //for each loop
        cout << val << " ";
    }
    
    
    //pop back function used to remove values from vector
cout << "\n";
    cout << "Size = " << vec2.size() << endl;
    vec2.pop_back();
    cout << "After pop back size = " << vec2.size() << endl;

    //for now no value left to print 
    // for (int val : vec2) {
    //     cout << val << " ";         
    // }

cout << "\n";
    //front function used to print first value of vector
    cout << "front function print first value: " << vec2.front() << endl;

    //back function used to print last value of vector
    cout << "back function print last value: " << vec2.back() << endl;

cout << "\n";
    //at function is used to access value at a specific index
    cout << "AT function print spcific index value: " << vec2.at(1) << endl;  

}
