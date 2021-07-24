#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t, n, sum;
    cin >> t;
    //while there's test cases
    while (t--) {
        //read in the integer
        cin >> n;
        sum = 0;
        //while there's a digit
        while (n) {
            //use modulo to get last digit, add it to the sum
            sum += n % 10;
            //perform integer division on n so we're looking at the next digit
            n /= 10;
        }
        //print the sum on a new line
        cout << sum << endl; 
    }
    return 0;
}