// Write a program to find the remainder when an integer A is divided by an integer B.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t, a, b;
    cin >> t;
    //while there's test cases
    while (t--) {
        cin >> a >> b;
        cout << (a % b) << endl; 
    }
    return 0;
}