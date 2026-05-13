//this program shows differnt basic syntax of vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>newvec;      // first
    //cout << newvec[0];

cout << "\n";    
    vector<int> vec = {1, 2, 3};    //second
    cout << vec[0] << " ";
    cout << vec[1] << " ";
    cout << vec[2];

cout << "\n";
    vector<char> vec2 = {'a', 's', 'd'};    //for character type
    cout << vec2[0] << " ";
    cout << vec2[1] << " ";
    cout << vec2[2] << " ";

cout << "\n";
    vector<int>vec3(3, 0);         //forth 
    cout << vec3[0] << " ";
    cout << vec3[1] << " ";
    cout << vec3[2];

cout << "\n";
    vector<char>vec4 = {'a', 'b', 'c'};
    for (char val : vec4) {                //for each loop
        cout << val << " ";
    }
    
}
